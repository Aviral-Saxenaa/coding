#include <bits/stdc++.h>
using namespace std;

void sub(int arr[], vector<int> &ans, int n, int ind)
{
    if (ind == n)
    {
        if (ans.size() == 0)
            cout << "{}";
        else
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
    sub(arr, ans, n, ind + 1);
    ans.pop_back();
    sub(arr, ans, n, ind + 1);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> ans;
    int ind = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sub(arr, ans, n, ind);

    return 0;
}