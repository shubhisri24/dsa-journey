#include <iostream>
using namespace std;

int sum(int num[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+num[i];
    }
     
  return sum;
}

int main(){

    int num[40];
    int size;

    cout<<"enter the size of the array: ";
    cin>>size;
    cout<<"enter the values of the arrar"<<endl;
    for(int i=0; i <size;i++){

        cin>>num[i];
    }
    cout<<endl;
     cout<<"sum of all the elements of the array: "<< sum(num,size);
    
    return 0;
}