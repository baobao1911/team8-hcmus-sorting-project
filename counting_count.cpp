#include "sort.h"

void CountingSort(int a[], int n,int count) {
	int* u, * v;
	int min = a[0],
		max = a[0]; ++count; ++count;
	for (int i = 0 && ++count; ++count&& i < n; ++count && i++) {
		if (++count && a[i] < min){
			min = a[i]; ++count;
		}
		if (a[i] > max) {
			max = a[i]; ++count;
		}
	}
	u = new int[n];
	v = new int[max - min + 1];
	for (int i = 0 && ++count; ++count && i <= max - min + 1; ++count && i++){
		v[i] = 0; ++count;
	}
	for (int i = 0 && ++count; ++count && i < n; ++count && i++) { v[a[i] - min]++; ++count; }
	for (int i = 1; i <= max - min + 1; i++) {
		v[i] += v[i - 1]; ++count;
	}
	for (int i = 0&& ++count; ++count&& i < n; ++count&& i++) {
		u[v[a[i] - min] - 1] = a[i]; ++count;
		v[a[i] - min]--; ++count;
	}
	for (int i = 0 && ++count; ++count && i < n; ++count && i++) {
		a[i] = u[i]; ++count;
	}
}