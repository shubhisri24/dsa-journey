#include <iostream>
using namespace std;

int main() {
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << "Value of i: " << i << endl;
    cout << "Address of i (&i): " << &i << endl;

    cout << "Value stored in ptr (address of i): " << ptr << endl;
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;
    cout << "Address of ptr (&ptr): " << &ptr << endl;

    cout << "Value stored in ptr2 (address of ptr): " << ptr2 << endl;
    cout << "Value pointed to by ptr2 (*ptr2): " << *ptr2 << endl;
    cout << "Value pointed to by *ptr2 (**ptr2): " << **ptr2 << endl;
    cout << "Address of ptr2 (&ptr2): " << &ptr2 << endl;

    return 0;
}