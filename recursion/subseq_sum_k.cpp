#include <bits/stdc++.h>
using namespace std;

void fun(int ind, int arr[], vector<int> &ans, int n, int s, int sum)
{
    if (ind == n)
    {
        if (s == sum)
        {
            for (auto it : ans)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    ans.push_back(arr[ind]);
    s += arr[ind];

    fun(ind + 1, arr, ans, n, s, sum);

    s -= arr[ind];
    ans.pop_back();
    fun(ind + 1, arr, ans, n, s, sum);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> ans;
    int sum = 2;
    fun(0, arr, ans, n, 0, sum);

    return 0;
}