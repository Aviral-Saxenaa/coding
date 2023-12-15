#include <bits/stdc++.h>
using namespace std;



void totsum(int i, int n)
{

        if (n < 1)
        {
                cout<<(i);
                return;
        }
        totsum(i + n, n - 1);
}

int main()
{
        int n;
        cin >> n;
        totsum(0, n);
}