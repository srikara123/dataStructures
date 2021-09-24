#include <iostream>

void swap( int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void BubbleSortRecursive( int a[], int n)
{
    int temp;
    if ( n == 1)
        return;

    for ( int i = 0; i < n-1; i++)
    {
        if ( a[i] > a[i+1])
        {
            swap(&a[i], &a[i+1]);
        }
    }

    BubbleSortRecursive( a, n-1);
    
}

void printArray(int a[], int size)
{
    for ( int i = 0; i < size; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[10]= { 3, 5, 9, 1, 2, 24, 15};
    int size = sizeof(a) / sizeof(a[0]);

    printArray(a, size);
    BubbleSortRecursive(a, size);
    printArray(a, size);

    return 0;
}