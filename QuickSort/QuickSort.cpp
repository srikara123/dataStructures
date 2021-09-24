#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;
void printArray(int a[], int size)
{
    for ( int i = 0; i < size; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");
}

void swap( int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int partitionIndex(int a[], int low, int high)
{
    int pivot = a[high];
    int j = low;
    for ( int i = low; i <= high; i++)
    {
        if ( a[i] < pivot)
        {
            swap(&a[i], &a[j]);
            j++;
        }
    }
    swap(&a[high], &a[j]);
    return j;
}

void QuickSort(int a[], int low, int high)
{
    if ( low < high)
    {
        int pi = partitionIndex(a, low, high);

        QuickSort(a, low, pi-1);
        QuickSort(a, pi+1, high);
    }
}

int main()
{
     /* initialize random seed: */
  srand (time(NULL));

  
    int a[10];
    
    for ( int i = 0; i < 10; i++)
    {
        /* generate secret number between 1 and 10: */
        int iSecret = rand() % 100 + 1;
        a[i] =iSecret;
    }

    int size = sizeof(a) / sizeof(a[0]);
    printArray(a, size);

    QuickSort(a, 0, size-1);

    printArray(a, size);

    return 0;
}