#include <iostream>
using namespace std;

void print(int *p){
  cout<<*p<<endl;

}

void update(int *p){
  *p = *p +1;
  p = p+1 ;//no change 
}

int main(){
    int a[10]={1,3,5,7};
    // error
   // a = a+1;
  cout<<&a<<endl;
    int *ptr= &a[0];
      ptr = ptr + 1;
    cout<<&ptr<<endl;
    cout<<ptr<<endl;


    int value= 5;
    int *p =&value;

    cout<<"before "<< *p <<endl;
    update(p);
    print(p);

    return 0;
}