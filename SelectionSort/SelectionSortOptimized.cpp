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

bool IsSorted(int a[], int n)
{
    bool inversions = false;

    for (int i = 0; i < n-1; i++)
    {
        for ( int j = 0 ; j < n-i-1; j++)
        {
            if ( a[j] > a[j+1])
                inversions = true;
        }
        if( !inversions)
            return true;
    }
    return false;
}

void SelectionSort( int a[], int n)
{
    bool inversions = false;
    for (int i = 0; i < n-1; i++)
    {
        for ( int j = 0 ; j < n-i-1; j++)
        {
            if ( a[j] > a[j+1])
                inversions = true;
        }

        if( !inversions)
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
    }
}

int main()
{
    // int a[]= { 5, 15, 19, 21, 22, 24, 125, 130, 225, 331};
    int a[]= { 55, 10};

    int size = sizeof(a) / sizeof(a[0]);

    printArray(a, size);
    SelectionSort(a, size);
    std::string sortState = IsSorted(a, size) ? std::string("Success") : std::string("Failed ");
    std::cout << " Sorting "<< sortState << std::endl;
    printArray(a, size);

    return 0;
}