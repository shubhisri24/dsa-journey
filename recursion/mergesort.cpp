#include <iostream>
using namespace std;

// Merge two sorted halves
void merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;

    // Length of left and right arrays
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Create temporary arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy left half
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    // Copy right half
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // Merge the temporary arrays back into arr
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] <= second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // Copy remaining elements of first[]
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    // Copy remaining elements of second[]
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    // Free allocated memory
    delete[] first;
    delete[] second;
}

// Merge Sort
void mergeSort(int arr[], int s, int e)
{
    // Base Case
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;

    // Sort left half
    mergeSort(arr, s, mid);

    // Sort right half
    mergeSort(arr, mid + 1, e);

    // Merge sorted halves
    merge(arr, s, e);
}

int main()
{
    int arr[] = {8, 3, 5, 4, 7, 6, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}