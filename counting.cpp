#include "sort.h"

void CountingSort(int a[], int n) {
	int* u, * v;
	int min = a[0], max = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < min)
			min = a[i];
		if (a[i] > max)
			max = a[i];
	}
	u = new int[n];
	v = new int[max - min + 1];
	for (int i = 0; i <= max - min + 1; i++)
		v[i] = 0;
	for (int i = 0; i < n; i++)
		v[a[i] - min]++;
	for (int i = 1; i <= max - min + 1; i++)
		v[i] += v[i - 1];
	for (int i = 0; i < n; i++) {
		u[v[a[i] - min] - 1] = a[i];
		v[a[i] - min]--;
	}
	for (int i = 0; i < n; i++)
		a[i] = u[i];
}