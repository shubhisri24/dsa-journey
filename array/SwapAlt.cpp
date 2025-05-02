#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;   
}

void AltSwap(int arr[], int n){
    for (int i = 0; i <n; i+=2)
    {
       if (i+1<n)
       {
        swap(arr[i+1],arr[i]);
       }
       
    }
    
}

int main(){
    int num[40];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    AltSwap(num,size);
    cout<<"the alternate swapped array is :";
    printArray(num,size);


    return 0;
}