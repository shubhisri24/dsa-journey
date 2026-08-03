#include <iostream>
#include <vector>
using namespace std;

vector<int> Union(vector<int>& arr1 ,vector<int>& arr2){
    int n = arr1.size();
    int m = arr2.size();
    int i = 0 ;
    int j = 0 ;
    vector<int>  ans;
    while (i < n && j < m)
    {
        if (arr1[i]<arr2[j])
        {
           ans.push_back(arr1[i]);
           i++;
        }
        else if(arr1[i]>arr2[j]){
            ans.push_back(arr2[j]);
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        
    }

    while (i <n)
    {
       ans.push_back(arr1[i]);
       i++;
    }
    while (j <m)
    {
       ans.push_back(arr2[j]);
       j++;
    }
    
     return ans;


}

int main(){

    vector<int> arr ={1,5,7,9};
   vector <int> arr1= {1,5,6,10,12,19};
    vector <int> ans =Union(arr, arr1);
    

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i] <<" ";
    }
    
    return 0;
}