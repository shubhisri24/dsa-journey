#include <iostream>
using namespace std;

bool linearSearch (int arr[], int size , int key){
    // base conditon
    if(size ==0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        bool smallProblem = linearSearch(arr+1, size-1, key);
        return smallProblem;
    }
}

int main(){
    int arr[5] = {2, 6, 3, 1, 9};
    int size = 5;
    int key = 3;

    bool result = linearSearch(arr, size, key);
    cout << result << endl;

    return 0;
}