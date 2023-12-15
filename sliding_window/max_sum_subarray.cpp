#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, size, arr[n];
    cin >> n >> size;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi = INT_MIN;
    int i = 0, j = 0, sum = 0;
    while (j < n)
    {
        sum += arr[j];
        if (j - i + 1 < size)
        {
            j++;
        }
        else
        {
            maxi = max(maxi, sum);
            sum -= arr[i];
            i++;
            j++;
        }
    }
    cout << maxi << endl;
    return 0;
}