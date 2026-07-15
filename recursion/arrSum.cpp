#include <iostream>
using namespace std;


int arrSum(int arr[], int size){
    // base case
    if(arr[0]==0 || size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }

    int smallProblem = arrSum(arr+1, size-1);
    return arr[0] + smallProblem;
}

int main(){
    int arr[5]={2,6,3,1,9};
    int size = 5;
     
    int ans = arrSum(arr, size);

    cout<<ans<<endl;

    return 0;
}