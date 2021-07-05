#include "main.h"

void printArray(int a[], int n)
{
    for (int i = 0; i < n; ++i) cout << a[i] << " ";
    cout << "\n";
}

int main(int argc, char *argv[])
{
    int *a = new int[50];
    GenerateData(a,50,0);
    printArray(a,50);
    SortData(a,50,9);
    printArray(a,50);
    return 0;
}
