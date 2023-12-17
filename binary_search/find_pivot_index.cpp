#include <bits/stdc++.h>
using namespace std;

int pivot(int n, int arr[])
{
    int l = 0;
    int r = n - 1;

    while (l < r)
    {
        int mid = (l + r) / 2;

        if(arr[mid]>arr[r]){
                l=mid+1;
        }
        else{
                r=mid;
        }
    }
    return arr[l];
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans=pivot(n, arr);
    cout<<ans;
    return 0;
}
