#include <iostream>
using namespace std;

int main(){
    int num= 100;
    int a = num;
    cout<<"a before "<<num<<endl;
    a++;
    cout <<" a after "<< num<<endl;
    num++;

     cout <<" a after "<< num<<endl;
    int *p = &num;
    cout<<*p<<endl;

    cout<<"before "<<num<<endl;
    (*p)++;
    cout<<"after "<<num<<endl;
    cout<<&num<<endl;
    cout<<*p<<endl;
    cout<<"xyz"<<++ p<<endl;

    cout<<p<<endl;

    // copy a pointer
    int *q = p;// points to the adrress of p 
    cout << p <<" - " <<q <<endl;
    cout << *p << " - "<<*q <<endl;


    // important concept 
    int i = 3;
    int *t =&i;
    cout<< (*t)++<<endl;
    cout<<t<<endl;
    cout<<t+1<<endl;
    cout<<*t<<endl;


    return 0;
}