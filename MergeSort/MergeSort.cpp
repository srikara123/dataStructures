#include <iostream>
#include <array>
#include <vector>

void swap( int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

void Merge( int arr[], int left, int mid, int right)
{
   int leftSize = mid - left +1;
   int rightSize = right - mid;

   int leftArr[leftSize];
   int rightArr[rightSize];

   /* Copy data to temp arrays L[] and R[] */
    for (int i = 0; i < leftSize; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < rightSize ; j++)
        rightArr[j] = arr[mid + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = left; // Initial index of merged subarray
    while (i < leftSize && j < rightSize) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        }
        else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
  
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < leftSize) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
  
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < rightSize) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void MergeSort( int arr[], int left, int right)
{
    if ( left < right)
    {
        int mid = left + (right - left) /2;
        MergeSort(arr, left, mid);
        MergeSort(arr, mid+1, right);

        Merge(arr, left, mid, right);

    }
}



int main()
{
    int arr[] = { 4, 2, 3, 9};

    int arr_size = sizeof(arr) / sizeof(arr[0]);
  
    printf("Given array is \n");
    printArray(arr, arr_size);
  
    MergeSort(arr, 0, arr_size - 1);
  
    printf("\nSorted array is \n");
    printArray(arr, arr_size);

    return 0;
}