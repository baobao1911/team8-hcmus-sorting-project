#include "sort.h"

int Partition(int a[], int left, int right) {

	int pivot = a[right];
	int i, j;
	i = (left - 1);
	for (j = left; j <= right - 1; j++){
		if (a[j] < pivot){
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[right]);
	return (i + 1);
}

void QuickSortSub(int a[], int left, int right) {
	if (left < right)
	{
		int pi = Partition(a, left, right);

		QuickSortSub(a, left, pi - 1);  // Before pi
		QuickSortSub(a, pi + 1, right); // After pi
	}
}

void QuickSort(int a[], int n){
	return QuickSortSub(a,0,n);
}