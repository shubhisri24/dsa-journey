#include <iostream>
using namespace std;

int  peak(int arr[],int n){
    int s=0,e=n-1;

    int mid =s+(e-s)/2;

    while (s<e)
    {
        if (arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }

        else{
            e=mid;
        }
      mid=s+(e-s)  /2;
    }
    return s;
}

int main(){
    
    int arr[11]={0,1,2,3,4,5,4,3,2,1,0};
    cout<<"the peak element in the array is :" <<peak(arr,11);

    return 0;
}