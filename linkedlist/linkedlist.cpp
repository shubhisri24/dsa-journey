#include <iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    //constructure
    node(int value){
        data= value;
        next=nullptr;

    }
};

class linkedList{
    private:
    node *head;
    public:
    linkedList(){
        head = nullptr;
    }

};


int main(){
    node* node1 = new node(10);
    node1
    return 0;
}