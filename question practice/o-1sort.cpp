#include <iostream>
using namespace std;

int sort(int arr[], int n)
{
    int l = 0, r = n - 1;

    while (l < r)
    {

        while (arr[l] == 0)
        {
            l++;
        }

        while (arr[r] == 1)
        {
            r--;
        }
        if (arr[l] == 1 && arr[r] == 0 && l < r)
        {
            swap(arr[l], arr[r]);
            l++;
            l--;
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[9] = {0, 1, 1, 1, 0, 0, 1, 0, 0};
    sort(arr, 9);
    print(arr, 9);
    return 0;
}