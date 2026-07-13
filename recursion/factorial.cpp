#include <iostream>
using namespace std;

int factorial(int n){
    // base case
    if(n==0 || n==1){
        return 1;
    }
    else{
        int smallerProblem = factorial(n-1);
        int biggerProblem = n * smallerProblem;
        return biggerProblem;
    }
}

int main(){
    int n;
     
    cout<<"enter the value of n : ";
    cin>>n;

    int ans = factorial(n);

    cout<<" the factorial of n: "<<ans<<endl;
    return 0;
}