#include <iostream>
using namespace std;

void findDuplicate(int arr[], int n)
{
    int duplicate = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i]<<" ";
            }
        }
        
    }
}

int main()
{
    int arr[8] = {2, 2, 44, 3, 5, 6, 6, 8};
    findDuplicate(arr, 8);
    return 0;
}



/*this may not be effiecient and whatsoever but this is the only approach i think of so far
*/