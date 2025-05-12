#include <iostream>
using namespace std;

bool search(int num[], int n , int key){
    for (int i = 0; i <n; i++)
    {
        if (num[i]==key);
         return 1;
    }
return 0;
}

int main(){

    int size, num[40],key;
    cout<<"enter the size of the of the array: "<<endl;
    cin>>size;

    cout<<"enter the elements of the array : "<<endl;
    for (int i = 0; i < size; i++)
    {
       cin>>num[i];
    }

    cout<<"enter the key u want to search: "<<endl;
    cin>>key;
    
    bool found = search(num,size,key);

    if (found){
        cout<<"key is present"<<endl;
    }

    else{
        cout<<"key is absent"<<endl;
    }

    return 0;
}