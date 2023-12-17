#include <bits/stdc++.h>
using namespace std;

//! Search in an rotated sorted array

int bs(int k, int arr[], int left, int right)
{
        while (left <= right)
        {
                int mid = (left + right) / 2;

                if (arr[mid] == k)
                {
                        return mid;
                        break;
                }
                else if (arr[mid] < k)
                {
                        left = mid + 1;
                }
                else
                {
                        right = mid - 1;
                }
        }
        return -1;
}

int pivot(int n, int arr[], int k)
{
        int l = 0;
        int r = n - 1;

        while (l < r)
        {
                int mid = (l + r) / 2;

                if (arr[mid] > arr[r])
                {
                        l = mid + 1;
                }
                else
                {
                        r = mid;
                }
        }

        if (k <= arr[l])
        {
                return bs(k, arr, l, n - 1);
        }
        else
        {
                return bs(k, arr, 0, l - 1);
        }
}

int main()
{
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
                cin >> arr[i];
        }
        int k;
        cin >> k;
        cout << pivot(n, arr, k);
}