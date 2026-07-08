// same memory different names..
#include <iostream>
using namespace std;

void update(int &n){
    n++;
}

int main(){
    
    int n=5;
    cout<<"before: "<<n<<endl;
    update(n); 
    cout<<"after: "<<n<<endl; 
    return 0;
}