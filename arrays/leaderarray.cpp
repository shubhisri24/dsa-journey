#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 
vector<int> leader(int arr[], int n){
    vector<int> ans;
    int maxi = INT8_MIN;
    for (int i = n-1; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
           
            ans.push_back(arr[i]);
             maxi= arr[i];
        }
        
    }

 reverse(ans.begin(), ans.end());
 return ans;
    
    
}
int main() {
     int arr[6] = {10, 22, 12, 3, 0, 6};
     int n = 6;

   vector<int> ans = leader(arr, n);
    for (int i = 0; i < ans.size(); i++)

    {
        cout<<ans[i]<<" ";
    }
    

    return 0;
}






//brute force


// vector<int> leader(int arr[], int n)
// {
//     bool leader;
//     vector<int> ans;

//     for (int i = 0; i < n; i++)
//     {
//         leader = true;

//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 leader = false;
//                 break;
//             }
//         }

//         if (leader == true)
//         {
//             ans.push_back(arr[i]);
//         }

//     }
//     return ans;
// }

// int main()
// {
//     int arr[6] = {10, 22, 12, 3, 0, 6};
//     int n = 6;

//     vector<int> ans = leader(arr, n);
//     for (int i = 0; i < ans.size(); i++)

//     {
//         cout<<ans[i]<<" ";
//     }
    

//     return 0;
// }

// /// leader in an array --> everything on the right is smaller
// //
