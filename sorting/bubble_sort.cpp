#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {2, 1, 4, 3, 5};

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}