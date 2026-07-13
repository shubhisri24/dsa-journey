#include <iostream>
#include <iomanip>
using namespace std;

double avg(int num[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += num[i];  // Summation
    }
    double average = (double)sum / n;  // Type casting to avoid integer division
    return average;
}

int main() {
    int num[40];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    if (size == 0) {
        cout << "No elements to average" << endl;
        return 0; // Exit early if no elements
    }

    cout << "Enter the values of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    // Display average with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Average of all the elements of the array: " << avg(num, size) << endl;

    return 0;
}
