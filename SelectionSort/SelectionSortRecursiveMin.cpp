#include <iostream>

void swap( int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void printArray(int a[], int size)
{
    for ( int i = 0; i < size; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");
}

void SelectionSortRecursiveMin( int a[], int i, int n)
{
    if ( i == n-1)
        return;

    int minElePos = i;
    for ( int j = i+1 ; j < n; j++)
    {
        if (a[j] < a[minElePos])
        {
            minElePos = j;
        }
    }
    swap( &a[minElePos], &a[i] );

    SelectionSortRecursiveMin(a, i+1, n);
}

int main()
{
    int a[10]= { 55, 5, 9, 1, 2, 24, 15, 10, 25, 31};

    int size = sizeof(a) / sizeof(a[0]);

    printArray(a, size);
    SelectionSortRecursiveMin(a, 0, size);
    printArray(a, size);

    return 0;
}