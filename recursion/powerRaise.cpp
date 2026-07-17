#include <iostream>
using namespace std;

int power(int a, int b){
    //base case
    if (b==0)
    {
       return 1;
    }
    if (b==1)
    {
        return a;
    }
    
    //recursive call

    int chhotiproblem = power(a,b/2);

    //badi problem
    if (b%2==0)
    {
        return chhotiproblem * chhotiproblem;
    }
    else{
        return a * chhotiproblem * chhotiproblem;
    }
        
}

int main(){

    int a, b;
    cout<<"Enter the value of number: ";
    cin>>a;
    cout<<"Enter the value of expoentent: ";
    cin>> b;

    int ans = power(a, b);

    cout<<"answer: "<<ans<<endl;
    
    return 0;
}