#include <bits/stdc++.h>
using namespace std;

/*
todo : first we have to take prime factorization of no and then multiply by (P-1) and divide by P
*/

int phi(int n)
{
    int res = n;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            res /= i;
            res *= (i - 1);

            while (n % i == 0)
            {
                n /= i;
            }
        } //! time complexity = O(sqrt(n))
    }
    if (n > 1)
    {
        res /= n;
        res *= (n - 1);
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = phi(n);
        cout << "etf  = " << ans << endl;
    }
    return 0;
}