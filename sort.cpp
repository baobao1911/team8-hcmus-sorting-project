#include "main.h"
#include "sort.h"
void SortData(int a[], int n, int sortType){
    switch (sortType)
	{
        case 1: void SelectionSort(int a[], int n); break;
        case 2: void InsertionSort(int a[], int n); break;
        case 3: void BubbleSort(int a[], int n); break;
        case 4: void ShakerSort(int a[], int n); break;
        case 5: void ShellSort(int a[], int n); break;
        case 6: void HeapSort(int a[], int n); break;
        case 7: void MergeSort(int a[], int n); break;
        case 8: void QuickSort(int a[], int n); break;
        case 9: void CountingSort(int a[], int n); break;
        case 10: void RadixSort(int a[], int n); break;
        case 11: void FlashSort(int a[], int n); break;
	}
}