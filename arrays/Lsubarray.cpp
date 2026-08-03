#include <iostream>
using namespace std;

int longestSubarray(int arr[], int n ,int k)
{
     int len = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum+= arr[j];
             if (sum==k)
        {
            len = max(len, j - i + 1);
        }
        
        }
        
    }
    
    return len;
}

int main()
{
     int arr[6] = {2, 3, 1, 5, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;

   cout<< longestSubarray(arr, n, k);
    
    return 0;
}