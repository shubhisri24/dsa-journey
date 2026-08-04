#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// 100 4 200 1 3 2

bool search(vector<int> &nums, int key, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int longestconsq(vector<int> &arr, int size)
{
    int maxLength = 0;
    for (int i = 0; i < size; i++)
    {
        int key = arr[i];
        int streak = 1;

        while (search(arr, key + 1, size))
        {
            key++;
            streak++;
        }
        maxLength = max(maxLength, streak);
    }

    return maxLength;
}

int main()
{

 vector <int> arr = {100, 4, 200, 1, 10, 2};
 int n = arr.size();

 cout<<longestconsq(arr,n);

    return 0;
}