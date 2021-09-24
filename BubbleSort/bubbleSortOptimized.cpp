#include <iostream>

void swap( int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void BubbleSort( int a[], int n)
{
    int temp;
    int swaps = 0;
    for (int i = 0; i < n; i++)
    {
        for ( int j = 0 ; j < n-i-1; j++)
        {
            if ( a[j] > a[j+1])
            {
                swap(&a[j], &a[j+1]);
                swaps++;
            }
        }
        if ( !swaps)
            break;
    }

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
    int a[]= { 7,5,4,3,2,1};
    int size = sizeof(a) / sizeof(a[0]);

    printArray(a, size);
    BubbleSort(a, size);
    printArray(a, size);

    return 0;
}