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
    while( low <= high)
    {
         int mid = ( low + high)/2;

        if ( key == a[mid])
            return mid;
        else if ( key < a[mid])
            high = mid-1;
         else if ( key > a[mid])
            low = mid+1;
    }
    return -1;
}

int main()
{
    int a[] = {1,3, 4, 6, 8, 9 , 11};
    int size = sizeof(a) / sizeof(a[0]);
    printArray(a, size);

    int key = 1;

    int ele = BinarySearch(a, 0, size-1, key);

    printf(" %d found at %d \n ", key, ele);
 

    return 0;
}