#include <iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key){
 // base case
    if(s>e){
        return false;
    }
    int mid=(s+e)/2;
    // element found
    if(arr[mid]==key){
        return true;
    }
    //element is in left part
    if(arr[mid]>key){  
        return binarySearch(arr, s, mid-1, key);
    }
    //element is in right part
    return binarySearch(arr, mid+1, e, key);

}

int main(){
    
    int arr[9]={2,4,6,8,10,12,14,16,18};
    int size=9;
    int key=12;
    bool result = binarySearch(arr, 0, size-1, key);
    if(result){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
    return 0;
}