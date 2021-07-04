#include "main.h"
#include "sort.h"
void SortData(int a[], int n, int sortType){
    switch (sortType)
	{
        case 1: SelectionSort(a,n); break;
        case 2: InsertionSort(a,n); break;
        case 3: BubbleSort(a,n); break;
        //case 4: ShakerSort(a,n); break;
        //case 5: ShellSort(a,n); break;
        case 6: HeapSort(a,n); break;
        //case 7: MergeSort(a,n); break;
        case 8: QuickSort(a,n); break;
        //case 9: CountingSort(a,n); break;
        //case 10: RadixSort(a,n); break;
        //case 11: FlashSort(a,n); break;
	}
}