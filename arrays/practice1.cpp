#include <iostream>
#include <climits>  // For INT_MIN and INT_MAX
#include <utility>
using namespace std;

pair<int, int> getMinMax(int arr[], int n)
{
    // Handle edge case: empty array
    if (n == 0) {
        cout << "Array is empty!" << endl;
        return make_pair(INT_MIN, INT_MAX);  // Return extremes if empty
    }

    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    return make_pair(max, min);
}

int main()
{
    int num[40];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    
    // Handle edge case: array size is 0
    if (size == 0) {
        cout << "Array size is 0. No elements to process." << endl;
        return 0;
    }

    cout << "Enter the values of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    pair<int, int> result = getMinMax(num, size);
    cout << "Max: " << result.first << endl;
    cout << "Min: " << result.second << endl;

    return 0;
}
