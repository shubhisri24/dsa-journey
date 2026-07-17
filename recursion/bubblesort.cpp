#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    // Base case
    if (size == 0 || size == 1)
    {
        return;
    }

    // One pass of bubble sort
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call
    sort(arr, size - 1);
}

int main()
{
    int arr[5] = {2, 4, 1, 8, 3};
    int size = 5;

    sort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}