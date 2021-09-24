#include <iostream>
#include <string>

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

void insertionSortRec(int arr[], int n)
{
    if ( n <= 1)
        return;

    insertionSortRec(arr, n-1);

    int last = arr[n-1];
    int j = n-2;

    /* Move elements of arr[0..i-1], that are
    greater than key, to one position ahead
    of their current position */
    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j = j - 1;
    }
    arr[j + 1] = last;
}


int main()
{
    int a[]= { 4, 3, 2, 10, 12, 1, 5, 6};
    int size = sizeof(a) / sizeof(a[0]);

    printArray(a, size);
    insertionSortRec(a, size);
    printArray(a, size);

    return 0;
}