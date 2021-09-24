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

void SelectionSortMin( int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int minElePos = i;
        for ( int j = i+1 ; j < n; j++)
        {
            if (a[j] < a[minElePos])
                minElePos = j;
        }
        swap( &a[minElePos], &a[i]);

    }
}

void SelectionSortMinDes( int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int minElePos = i;
        for ( int j = i+1 ; j < n; j++)
        {
            if (a[j] > a[minElePos])
                minElePos = j;
        }
        swap( &a[minElePos], &a[i]);

    }
}

int main()
{
    int a[]= { 55, 5, 9, 1, 2, 24 };

    int size = sizeof(a) / sizeof(a[0]);

    printArray(a, size);
    SelectionSortMinDes(a, size);
    printArray(a, size);

    return 0;
}