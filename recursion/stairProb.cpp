#include <iostream>
using namespace std;

int staircase(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    // r.c

    int smallProblem1=staircase(n-1);
    int smallProblem2=staircase(n-2);
    return smallProblem1 + smallProblem2;
}

int main(){
    int n ;
    cout<<"enter the value of n : ";
    cin>>n;
    
    int ans = staircase(n);
    cout<<"number of ways to climb the stairs: "<<ans<<endl;

    return 0;
}