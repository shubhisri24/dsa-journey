#include <iostream>
using namespace std;

int getMin(int num[], int n)
{
int min = INT16_MAX;  // the min VARIABLE is initialized with the maximum value

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int getMax(int num[], int n)
{
    int max = INT16_MIN; // the max varriable is initialized with the minimum value

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    // returning the max value
    return max;
}

int main()
{
    int size;
    cout << "enter the size of the array:" << endl;
    cin >> size;

    int num[40]; // declaring array with the (varriable) is not a good practice.
    cout << "enter the value of array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "the maximum value in the array is: " << getMax(num, size) << endl; // only the varriable shoulded be used as a parameter for any predefined function

    cout << "the minimum value in the array is: " << getMin(num, size) << endl;
    return 0;
}