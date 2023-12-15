#include <bits/stdc++.h>
using namespace std;

bool palindrome(int i, int n, string s)
{
        if (i == n / 2)
                return true;
        
        if (s[i] != s[n - i - 1])
        {
                return false;
        }
        return palindrome(i + 1, n, s);
        
}

int main()
{

        string s = "awba";
        int n = s.length();
        int i = 0;

        if (palindrome(i, n, s))
                cout << 'p';
        else
                cout << 'f';
        return 0; // Add a return statement to indicate successful program execution
}
