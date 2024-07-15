#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &s1, int start, int end)
{
    // Base case: if the string has 0 or 1 character, it is a palindrome
    if (start >= end)
    {
        return true;
    }

    // Check if the characters at start and end are the same
    if (s1[start] != s1[end])
    {
        return false;
    }

    // Recursive case: move towards the middle of the string
    return isPalindrome(s1, start + 1, end - 1);
}

bool isPalindrome(const string &s1)
{
    return isPalindrome(s1, 0, s1.length() - 1);
}

int main()
{
    string s1;
    cout << "Enter a string: ";
    cin >> s1;

    if (isPalindrome(s1))
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
