#include <bits/stdc++.h>
using namespace std;

void combinationsum(int target, int i, int arr[], vector<int> &v, int n, int totsum, vector<vector<int>> &ans) {
        
    if (i == n) {
        if (totsum == target) {
            ans.push_back(v);
        }
        return;
    }

    if (totsum>target) {
        return;
    }

    totsum += arr[i];
    v.push_back(arr[i]);
    combinationsum(target, i, arr, v, n, totsum, ans);
    totsum -= arr[i];
    v.pop_back();
    combinationsum(target, i + 1, arr, v, n, totsum, ans);
}

int main() {
    int n = 4;
    int arr[] = {7,2,6,5};
    int target = 16;
    vector<vector<int>> ans;
    vector<int> v;
    sort(arr,arr+n);
    combinationsum(target, 0, arr, v, n, 0, ans);

    for (auto i : ans) {
        for (auto j : i) {
            cout << j << ' ';
        }
        cout << endl;
    }

    return 0;
}
