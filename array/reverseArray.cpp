#include <iostream>
using namespace std;

void reverse(int num[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(num[start], num[end]);
        start++;
        end--;
    }
}

int main()
{
    int num[40];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the values of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    reverse(num, size);  // Reverse the array

    cout << "The reversed array is: ";
    // Print the reversed array
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}
