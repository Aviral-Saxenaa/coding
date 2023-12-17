#include <bits/stdc++.h>
using namespace std;

void peak(int n, int arr[])
{
        int l = 0;
        int h = n - 1;

        while (l <= h)
        {
                int mid = l + (h - l) / 2;

                if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
                {
                        cout << mid;
                        break;
                }
                else if (arr[mid - 1] < arr[mid] && arr[mid] < arr[mid + 1])
                {
                        l = mid + 1;
                }
                else if (arr[mid - 1] > arr[mid] && arr[mid] > arr[mid + 1])
                {
                        h = mid - 1;
                }
        }
}

int main()
{
        int n = 5;
        int arr[] = {0, 1, 2, 1, 0};

        peak(n, arr);
        return 0;
}
