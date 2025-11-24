#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int> &arr, int lb, int mid, int ub)
{
    int i = lb;
    int j = mid+1;
    int k = 0;

    vector<int> temp(ub - lb + 1);

    while (i <= mid && j <= ub)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }

        else
        {
            temp[k] = arr[j];
            j++;
        }

        k++;
    }

    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= ub)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int x = 0; x < temp.size(); x++)
    {
        arr[lb + x] = temp[x];
    }
}

void MergeSort(vector<int> &arr, int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        MergeSort(arr, lb, mid);
        MergeSort(arr, mid+1, ub);
        Merge(arr, lb, mid, ub);
    }
}

int main()
{
    int n;
    cout << "enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    MergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}