#include <iostream>
using namespace std;

void reverse(int i, int j, string &s){
    if(i>j){
        return;
    }
    swap(s[i], s[j]);
    i++;
    j--;
    reverse(i, j, s);
    
}

int main(){

    string s="Yashi";
    int n=s.length();

    reverse(0, n-1, s);
    cout << s << endl;
    return 0;
}