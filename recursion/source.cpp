#include <iostream>
using namespace std;

void reachDest(int src,int dest){

    cout<<"source : "<<src<<" destination : "<<dest<<endl;
    //base case 
   if(src==dest){
    cout<<"reached destination"<<endl;
    return;
   }
   // processing - ek step aage badh jao
   src++;
   // recursive call
   reachDest(src,dest);

}

int main(){
    int dest= 10;
    int src=1;

 cout<<endl;
 reachDest(src, dest);

    return 0;
}