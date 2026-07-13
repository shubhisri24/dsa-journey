#include <iostream>
using namespace std;

bool checkSpecial(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (((arr[i] + arr[i + 1])) % 2 == 0)

        {
            return false;
        }
    }
    cout << endl;
    return true;
}

int main()
{

    int num[5] = {2, 4, 5, 6, 7};
    if (checkSpecial(num, 5)) {
        cout << "Array is special" << endl;
    } else {
        cout << "Array is not special" << endl;
    }
    
    return 0;
}