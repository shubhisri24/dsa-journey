#include <iostream>
using namespace std;

int pairsum(int arr[], int n, int key)
{      
    int count= 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n ; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                cout << arr[i] << " " << arr[j]<<endl;
                count++;
            }
        }
    }
    return count;
}

int main()
{  
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8};
   int pairs= pairsum(arr, 9, 9);
   cout<<"total pair found is:"<<pairs<<endl;
    return 0;
}