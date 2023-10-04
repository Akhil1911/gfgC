#include <iostream>
using namespace std;

int chechPalindrome(string str)
{
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}

int main()
{
   string n;
    cin >> n;
    // chechPalindrome(to_string(n)) ? cout << n << " is Palindrome" : cout << "No";
    chechPalindrome((n)) ? cout << n << " is Palindrome" : cout << "No";
}