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

void SelectionSort( int a[], int n)
{
    int pass = 1;
    for (int i = 0; i < n-1; i++)
    {
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

        printf(" Pass %d : ", pass++);
        printArray( a, n);

    }
}

int main()
{
    int a[]= { 9, 4, 2, 3, 5, 8};

    int size = sizeof(a) / sizeof(a[0]);

    printArray(a, size);
    SelectionSort(a, size);
    printArray(a, size);

    return 0;
}