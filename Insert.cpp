#include "sort.h"

void InsertionSort(int a[], int n) {
	int i = 0, j = 0, key = 0;
	for (int i = 1; ++comparision && i < n; i++) {
		key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j = j - 1;
		}a[j + 1] = key;
	}
}