#include <iostream>
using namespace std;


// creating arrays with function
void printarray(int arr[], int size){
         cout<<endl<<"printing the array"<<endl;
          for (int i = 0; i <size; i++)
         {
         cout<<arr[i]<<" ";
         }
         cout<<"printing is done "<<endl;

}

int main(){
    
     //declaring an array
     int array[15];
     //assessing an array
     cout<<"value at index 14 is: "<<array[14]<<endl;
     cout<<"value at index 12 is: "<<array[12]<<endl;

     //declaring and intializing second array

     int second[3]={1,3,5};
     cout<<"value at index 0 is: "<<second[0]<<endl;
     cout<<"value at index 1 is: "<<second[1]<<endl;
     cout<<"value at index 2 is: "<<second[2]<<endl;
      


     int third[15]={2,4};
     cout<<endl<<"printing the array"<<endl;
     int n=15;
     for (int i = 0; i <n; i++)
        {
         // cout<<third<<" "<<endl;
         /*Inside the loop, the code attempts to print third, which is the name of the array. In C++, the name of the array acts as a pointer to the first element of the array.
     
         Since third is a pointer to the first element of the array, printing third in each iteration will print the memory address of the first element of the array third.

         The output will be the memory address of the first element of the array third, printed 15 times,,in this case its: 0x61fe74
          */    
         cout<<third[i]<<" ";
        }

        //initiallising all location with 0

        int forth[10]={0};
         cout<<endl<<"printing the array"<<endl;
         int y=10;
         for (int i = 0; i <y; i++)
         {
         cout<<forth[i]<<" ";
         }
          
         //initiallising all location with 1 in below line [not possible]
         int fifth[8]={1};
         //cout<<endl<<"printing the array"<<endl;
         int x=10;
         //for (int i = 0; i <x; i++)
         //{
         //cout<<fifth[i]<<" ";
         //}
         printarray( fifth, 8);

         int fifthsize= sizeof(fifth)/sizeof(int);
         cout<<"size of fifth array : "<<fifthsize<<endl;

          


 return 0; 

}