#include <iostream>
using namespace std;

int main(){
//    int  first=8;
//    int second = 18;
//    int *ptr =&second;
//    *ptr = 9;
//    cout<<first<<" "<<second<<endl;

// int first =6;
// int * p = &first;
// int *q= p;
// (*q)++;
// cout<< first <<endl; 


// int first = 8;
// int *p = &first;
// cout<<(*p)++<<" ";// since its a post increment first value will be printed then increment hoga 
// cout<<first<<endl;


// int *p = 0;//the pointer doesn't point to any valid memory.
// int first = 110;
// *p = first;
// cout<<*p <<endl;
//A pointer must point to a valid memory location before you dereference (*) it.

// int f = 8;
//  int s= 11;
//  int *t = &s;
//  f = *t;// value fixed
//  *t=*t+2;
//  cout<<f<<" "<<s<<endl;


// float f= 12.5;
// float p = 21.5;
// float *ptr =&f;//*ptr=12.5 f=12.5 p =21.5
// (*ptr)++; //*ptr=13.5 f=13.5 p =21.5
// *ptr= p;//*ptr=21.5 f=21.5 p =21.5
// cout<<*ptr << " "<< f<< " "<<p << endl;


// int arr[5];
// int *ptr;
// cout<<sizeof(arr)<< " "<<sizeof(ptr)<<endl;

 
// int arr[6]= {11,21,13};
// cout<< (arr+1)<<endl;


// char ch = 'a';
// char *ptr=&ch;
// ch++;
// cout<<*ptr <<endl;

int first = 100;
int * p = &first; 
int **q = &p;
int second =(**q)++ + 9;// second =109 fixed value
cout<<first<< " "<< second << endl;



return 0;
}