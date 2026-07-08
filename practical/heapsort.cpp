#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i, long long &comparisons)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n)
    {
        comparisons++;
        if (arr[left] > arr[largest])
        {
            largest = left;
        }
    }

    if (right < n)
    {
        comparisons++;
        if (arr[right] > arr[largest])
        {
            largest = right;
        }
    }

    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest, comparisons);
    }
}

void heapsort(int arr[], int n, long long &comparisons)
{

    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i, comparisons);
    }

    for (int i = n - 1; i > 0; i--)
    {

        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0, comparisons);
    }
}

int main()
{

    int n;
    cout << "enter the number of elements: ";
    cin >> n;

    int arr[1000];
    cout << "enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long comparisons = 0;

    heapsort(arr, n, comparisons);

    cout << "sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "the number of key comparisons are : " << comparisons << endl;

    return 0;
}
