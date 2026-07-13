#include <iostream>
using namespace std;

int fibonacci(int n){
    // base case
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        int smallerProblem1 = fibonacci(n-1);
        int smallerProblem2 = fibonacci(n-2);
        int biggerProblem = smallerProblem1 + smallerProblem2;
        return biggerProblem;
    }

}

int main(){
    int n;
    cout<<"enter the vaalue of n: ";
    cin>>n;

  fibonacci(n);
    return 0;
}