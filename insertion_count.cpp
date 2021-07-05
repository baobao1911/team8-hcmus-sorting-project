#include "sort.h"

void InsertionSort(int a[], int n,int count) {
		int i = 0, j = 0, key = 0;
		for (int i = 1&&++count;++count &&i < n; ++count &&i++) {
			key = a[i]; ++count;
			j = i - 1; ++count;
			while (++count && ++count&&j >= 0 && a[j] > key) {
				a[j + 1] = a[j]; ++count;
				j = j - 1; ++count;
			}a[j + 1] = key; ++count;
		}
}