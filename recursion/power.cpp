#include <iostream>
using namespace std;

int power(int n){
    // base condition
    if(n==0){
        return 1;
    }
    else{

    int smallerProblem= power(n-1);
    int biggerProblem = 2 * smallerProblem;
    return biggerProblem;
    }
}

int main(){
    
    int n;
    cout<<"enter the value of n : ";
    cin>>n;

    int ans = power(n);
    cout<< "the value of 2^n : "<<ans<<endl;
    return 0;
}