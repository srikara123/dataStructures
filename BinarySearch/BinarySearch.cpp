#include <iostream>

void printArray(int a[], int size)
{
    for ( int i = 0; i < size; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");
}

int BinarySearch(int a[], int low, int high, int key)
{
    if ( low > high)
        return -1;
    
    int mid = ( low + high)/2;

    if ( key == a[mid])
        return mid;
    else if ( key < a[mid])
        return BinarySearch(a, low, mid-1, key);
    else if ( key > a[mid])
        return BinarySearch(a, mid+1, high, key);

    return -1;
}

int main()
{
    int a[] = {1,3, 4, 6, 8, 9 , 11};
    int size = sizeof(a) / sizeof(a[0]);
    printArray(a, size);

    int ele = BinarySearch(a, 0, size, 9);

    printf(" 9 found at %d \n ", ele);
 

    return 0;
}