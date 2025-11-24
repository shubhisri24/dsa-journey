// given a character array = reverse tne order of the word
#include <iostream>
using namespace std;

string reverse(string str)
{
    string rev = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        rev += str[i];
    }

    return rev;
}

int main()
{
    string str = "my name is shubhi";
    string word = "", result = "";

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            result += reverse(word) + " ";
            word = "";
        }
        else
        {
            word += str[i];
        }
    }
    result += reverse(word);

    cout << result;

    return 0;
}