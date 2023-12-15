#include <bits/stdc++.h>
using namespace std;

void fuc(int n, int ind, int arr[], vector<int> &ans, int target, int s)
{
    if (ind == n)
    {
        if (s == target)
        {
            for (auto it : ans)
                cout << it << " ";
            cout<<endl;
        }
        return;
    }
    ans.push_back(arr[ind]);
    s += arr[ind];
    fuc(n, ind + 1, arr, ans, target, s);

    s -= arr[ind];
    ans.pop_back();
    fuc(n, ind + 1, arr, ans, target, s);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int target;
    cin >> target;
    vector<int> ans;
    fuc(n, 0, arr, ans, target, 0);
}