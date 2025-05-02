#include <iostream>
using namespace std;

int triplet(int arr[], int n, int key)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == key)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8,9}; //if The last element arr[8] is uninitialized, meaning it contains garbage values (which can be 0 or anything random).

    int triple = triplet(arr, 9, 6);
    cout << "the no. of triplet found is : " << triple << endl;
    return 0;
}