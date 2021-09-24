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

void BubbleSort( int a[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for ( int j = 0 ; j < n-i-1; j++)
        {
            if ( a[j] > a[j+1])
            {
                swap(&a[j], &a[j+1]);
            }
        }
    }
}

void BubbleSortSmallerEle( int a[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for ( int j = 0 ; j < n-i-1; j++)
        {
            if ( a[j] < a[j+1])
            {
                swap(&a[j], &a[j+1]);
            }
        }
    }
}

void BubbleSortReversed( int a[], int n)
{
    int temp;
    int pass = 1;
    for (int i = 0; i < n; i++)
    {
        for ( int j = n-1 ; j > i; j--)
        {
            if ( a[j] < a[j-1])
            {
                swap(&a[j], &a[j-1]);
            }
        }
        printf(" Pass %d : ", pass++);
        printArray( a, n);
    }
}



int main()
{
    int a[]= { 1, 4, 2,5,3, 7};
    int size = sizeof(a) / sizeof(a[0]);

    printArray(a, size);
    BubbleSortReversed(a, size);
    printArray(a, size);

    return 0;
}