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

void CountSort( int a[], int n, int low, int high)
{
    int range = high - low + 1;
    int freqArray[range];


    for ( int i = 0; i < range-1; i++)
        freqArray[i] = 0;

    for ( int i = 0; i < n-1; i++)
    {
        int temp = a[i] - low;
        freqArray[temp] += 1;
    }

    int k = 0;
    int s[n];
    for ( int i = 0; i < range ; i ++)
    {
        int freq = freqArray[i];
        for ( int j = 1  ; j <= freq; j++)
        {
            s[k] = i + low;

            k = k + 1;
        }
    }

    printArray(s, n);
}


int main()
{
    int a[]= { 16, 11,18,13, 17, 12, 13, 19, 17};
    int size = sizeof(a) / sizeof(a[0]);

    printArray(a, size);
    CountSort(a, size, 11, 19);

    return 0;
}