#include <iostream>
using namespace std;

bool checkPalindrome(int i , int j , string &s){
    //base condition
    if(i>=j){
        return true;
    }
    if(s[i] != s[j])
        return false;
    else{
        checkPalindrome(i+1,j-1,s);
        }

    
}
int main(){

    string name ="abba";
    bool ispalindrome = checkPalindrome(0, name.length()-1, name);
    if (ispalindrome)
    {
        cout<<"its a palindrome"<<endl;
    }
    else{
        cout<<"its not a palindrome";
    }
    
    
    return 0;
}