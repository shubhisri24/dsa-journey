#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, int lb, int mid, int ub)
{
    int i = lb;
    int j = mid + 1;
    int k = 0;

    vector<int> temp(ub - lb + 1);

    while (i <= mid && j <= ub)
    {
        if (a[i] <= a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }

    while (j <= ub)
    {
        temp[k] = a[j];
        j++;
        k++;
    }

    for (int x = 0; x < temp.size(); x++)
        a[lb + x] = temp[x];
}

void mergeSort(vector<int> &a, int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergeSort(a, lb, mid);
        mergeSort(a, mid + 1, ub);
        merge(a, lb, mid, ub);
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
