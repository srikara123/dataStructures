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

void SelectionSortRecursive( int a[], int i, int n)
{
    if ( i == n-1)
        return;

    int maxElement = a[0];
    int maxElePos = 0;
    for ( int j = 1 ; j < n-i; j++)
    {
        if (a[j] > maxElement)
        {
            maxElement = a[j];
            maxElePos = j;
        }
    }
    swap( &a[maxElePos], &a[(n-i-1)]);

    SelectionSortRecursive(a, i+1, n);
}

int main()
{
    int a[10]= { 55, 5, 9, 1, 2, 24, 15, 10, 25, 31};

    int size = sizeof(a) / sizeof(a[0]);

    printArray(a, size);
    SelectionSortRecursive(a, 0, size);
    printArray(a, size);

    return 0;
}