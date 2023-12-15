#include <bits/stdc++.h>
using namespace std;

//! Problem Statement
// John is at a toy store help him pick maximum number of toys. He can only select in a continuous manner and he can select only two types of toys.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k = 2;
        int n = s.length();
        map<char, int> m;

        int i = 0, j = 0, ans = INT_MIN;

        while (j < n)
        {
            m[s[j]]++;
            if (m.size() < 2)
            {
                j++;
            }
            else if (m.size() == 2)
            {
                ans = max(ans, (j - i + 1));
                j++;
            }
            else if (m.size() > 2)
            {
                while (m.size() > 2)
                {
                    m[s[i]]--;
                    if (m[s[i]] == 0)
                    {
                        m.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        cout << ans;
    }
    return 0;
}