#include <iostream>
using namespace std;

void print(int n){
    //base condition
    if(n==0){
        return;
    }
    else{
        cout<<n<<endl;
        print(n-1);
    }
}

int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    print(n);
    
    return 0;
}