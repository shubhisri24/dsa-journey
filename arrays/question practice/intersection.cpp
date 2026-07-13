#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> findIntersection(int arr1[], int arr2[], int n, int m) {
    vector<int> ans;
    
    // Compare elements from first array with second array
    for (int i = 0; i < n; i++) {
        int element = arr1[i];
        
        // Look for element in second array
        for (int j = 0; j < m; j++) {
            if (element == arr2[j]) {
                ans.push_back(element);
                arr2[j] = INT_MIN;  // Mark as used
                break;
            }
        }
    }
    
    return ans;
}

int main() {
    int arr1[100], arr2[100], n, m;
    
    cout << "Enter size of first array: ";
    cin >> n;
    
    cout << "Enter elements of first array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    
    cout << "Enter size of second array: ";
    cin >> m;
    
    cout << "Enter elements of second array: ";
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    
    vector<int> result = findIntersection(arr1, arr2, n, m);
    
    cout << "Intersection elements are: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}