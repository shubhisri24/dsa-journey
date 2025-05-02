#include <iostream>
using namespace std;

int FindUnique(int arr[], int n)
{

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int num[40];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    int unique = FindUnique(num, size);
    cout << "The unique element in the array is: " << unique << endl;

    return 0;
}