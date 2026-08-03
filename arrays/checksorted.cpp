#include <iostream>
using namespace std;

bool checkSorted(int arr[], int size)
{
    if (size <= 1)
        return true;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};

    if (checkSorted(arr, 5))
        cout << "Sorted";
    else
        cout << "Not Sorted";
}