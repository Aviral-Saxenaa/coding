#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int dep[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> dep[i];
    }
    sort(arr, arr + n);
    sort(dep, dep + n);

    int i = 1, j = 0;
    int result = 1;
    int plat_needed = 1;

    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            plat_needed++;
            i++;
        }
        else if (arr[i] > dep[j])
        {
            plat_needed--;
            j++;
        }
        if (plat_needed > result)
        {
            result = plat_needed;
        }
    }

    cout << result;

    return 0;
}