#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < (n - 1); i++)
    {
        int minimumIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minimumIndex])
            {
                minimumIndex = j;
            }
        }
        swap(arr[minimumIndex], arr[i]);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
