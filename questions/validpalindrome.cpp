#include <iostream>
#include <string>
using namespace std;

// valid format of the string

bool valid(char ch)
{

    if (ch >= 'a' && ch < 'z' ||
        ch >= 'A' && ch < 'Z' ||
        ch >= '0' && ch < '9')
    {
        return 1;
    }
    return 0;
}

// convert upper case to the lower case

char ToLowercase(char ch)
{
    if (ch >= 'A' && ch < 'Z')
    {
        return ch - 'A' + 'a';
    }
    return ch;
}

bool isPalindrome(string str)
{
    // faltu character hatane hai
    string temp = "";
    for (int j = 0; j < str.length(); j++)
    {
        if (valid(str[j]))
        {
            temp.push_back(str[j]);
        }
    }
    // check palindrome
    int s = 0, e = temp.length() - 1;
    while (s < e)
    {
        if (temp[s] != temp[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    if (isPalindrome(str))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}