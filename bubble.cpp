#include "sort.h"

void bubbleSort(int a[], int n)
{
    for (int i = 0; i <= (n - 2); i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            if (a[j] < a[j - 1])
            {
                swap(a[j - 1], a[j]);
            }
        }
    }
}