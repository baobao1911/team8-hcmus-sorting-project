#include "sort.h"

int Partition(int a[], int left, int right,int count) {

	int pivot = a[right]; ++count;
	int i, j;
	i = (left - 1); ++count;
	for (j = left &&++count; ++count &&j <= right - 1; ++count&& j++){
		if (++count&&a[j] < pivot){
			i++;
			std::swap(a[i], a[j]); ++count; ++count;
		}
	}
	std::swap(a[i + 1], a[right]); ++count; ++count;
	return (i + 1);
}

void QuickSortSub(int a[], int left, int right,int count) {
	if (++count&&left < right)
	{
		int pi = Partition(a, left, right,count);

		QuickSortSub(a, left, pi - 1,count);  // Before pi
		QuickSortSub(a, pi + 1, right,count); // After pi
	}
}
void QuickSort(int a[], int n, int count)
{
	return QuickSortSub(a, 0, n - 1, count);
}