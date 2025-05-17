#include <iostream>
using namespace std;

int BinSearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Move mid calculation inside the loop
        
        if (arr[mid] == key)
        {
            return mid;
        }
        
        if (arr[mid] < key)
        {
            start = mid + 1; // Move right
        }
        else
        {
            end = mid - 1; // Move left
        }
    }

    return -1; // Key not found
}

int main()
{
    int odd[9] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    int even[8] = {2, 4, 6, 8, 10, 12, 14, 16};

    int index = BinSearch(even, 8, 16);
    cout << "Index of 16: " << index; // Expected output: 7

    return 0;
}
