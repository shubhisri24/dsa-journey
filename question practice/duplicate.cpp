#include <iostream>
using namespace std;

int findDuplicate(int arr[],int n){
    int ans=0;

    for (int i = 0; i <n; i++)
    {
       ans=ans^arr[i] ;
    }

    for (int i = 1; i < n; i++)
    {
        ans=ans^i;
    }
    
    return ans;
}
int main(){
    int arr[100],size;
    cout<<"enter the size of the array: " ;
    cin>>size;

    cout<<"enter the elemnts of the array :";
    for (int i = 0; i < size ; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"the duplicate in the array is: "<<  findDuplicate(arr,size);;
  
    return 0;
}