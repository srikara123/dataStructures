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

void insertionSortType1(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// 8 5 7
// 5 8 7
void InsertionSort( int a[], int n, int pass)
{
    int temp;
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        // Move upto the position where you get the lesser value
        while ( a[i] < a[j])
        {
            j = j -1;
            if ( j < 0)
                break;
        }

        temp = a[i];

        // swap the elements by 1 position
        for ( int k = i; k > j+1; k--)
        {
            a[k] = a[k-1];
        }

        a[j+1] = temp;

        printf(" Pass %d ", pass++);
        printArray( a, n);
    }

}

int main()
{
    int a[]= { 9, 45, 23, 38, 46, 21, 84};
    int size = sizeof(a) / sizeof(a[0]);

    printArray(a, size);
    InsertionSort(a, size, 1);
    printArray(a, size);

    return 0;
}