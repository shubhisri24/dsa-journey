#include <iostream>
using namespace std;

void updateArray(int arr[], int n)
{

    cout << "inside the function" << endl;

    // printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going back to the main " << endl;
}

int main()
{
    int arr[3] = {1, 2, 3};

    updateArray(arr, 3);

    // printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


// array when used as function parameters, Instead of passing a copy of the entire array, C++ passes a pointer to the first element of the array. This means that any modifications inside the function affect the original array in main()