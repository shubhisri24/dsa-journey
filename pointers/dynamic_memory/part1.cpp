// same memory different names..
#include <iostream>
using namespace std;

// void update(int &n){
//     n++;
// }
int getsum(int *arr, int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
}

int main(){
    
    // int n=5;
    // cout<<"before: "<<n<<endl;
    // update(n); 
    // cout<<"after: "<<n<<endl; 

     int n; 
     cin>>n;
     
     //varriable size array 
     int *arr = new int[n];
     for (int i = 0; i < n; i++)
     {
        cin>>arr[i];

     }
     
     int ans= getsum(arr,n);
     cout<<"sum is: "<<ans<<endl; 


    return 0;
}