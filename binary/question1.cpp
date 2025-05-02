#include <iostream>
using namespace std;


int firstOcc(int arr[], int n, int key){
 
    int start=0,end=n-1;
     int ans=-1;
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        if (arr[mid]==key)
        {
           ans=mid ;
           end=mid-1;
        }

        else if (arr[mid]<key)
        {
           start=mid+1;   
        }
        else{
          end=mid-1;
        }
        
        mid=start+(end-start)/2;
    }
     return ans;

}

int lastOcc(int arr[], int n, int key){
 
    int start=0,end=n-1;
     int ans=-1;
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        if (arr[mid]==key)
        {
           ans=mid ;
          start=mid+1;
        }

        else if (arr[mid]<key)
        {
           start=mid+1;   
        }
        else{
          end=mid-1;
        }
        
        mid=start+(end-start)/2;
    }
    
 return ans;
}

int main(){
    
    int arr[9]= {1,2,3,4,5,6,6,6,6};
     
    cout<<"the first occerence of 6 is found at index "<<firstOcc(arr,9,6)<<endl;

        cout<<"the last occerence of 6 is found at index "<<lastOcc(arr,9,6);
      
    return 0;
}