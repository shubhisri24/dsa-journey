#include <iostream>
using namespace std;

int main()
{

    int rows, cols;
    cout << "enter the number of rows: ";
    cin >> rows;
    cout << "enter the number of columns: ";
    cin >> cols;

    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    // creation done

    // taking input for 2d array

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
        cout<<endl;
    }

    // printing the 2d array

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //release memory
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}