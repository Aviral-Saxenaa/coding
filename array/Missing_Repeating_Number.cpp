#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int ans1 = -1; // Initialize to some default value
    int ans2 = -1; // Initialize to some default value

    for (int i = 1; i <= n; i++)
    {
        if (mp[i] == 2)
        {
            ans1 = i;
        }
        else if (mp[i] == 0)
            ans2 = i;
    }

    cout << ans1 << ' ' << ans2;

    return 0;
}
