#include <iostream>
using namespace std;

int main(){
    // int arr[10]= {2,5,6};
    // cout<<" the address of the first memory block is: "<<arr<<endl;
    // cout<<" the address of the first memory block is: "<<&arr[0]<<endl;
    // cout<<" the value of the first memory block is: "<<*arr<<endl;
    // cout<< "the value of "<< (*arr)++<<endl;
    // cout<<" the address of the third memory block is: "<<&arr[2]<<endl;
    // cout<< "the value of "<< *arr + 1<<endl;
    // cout<< "the value of "<< (*arr)+ 1<<endl;
    // cout<< "the value of "<< *(arr +1)<<endl;
    


    // int i=2;
    // cout<<"45: "<<i[arr]<< endl;
    // cout<<"45: "<<arr[i]<< endl;


    int temp[10];
    cout<<sizeof(temp)<<endl;

    int *ptr = &temp[0];
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(ptr)<<endl;
    

    return 0;
}