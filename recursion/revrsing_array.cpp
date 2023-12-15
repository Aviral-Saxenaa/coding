#include <bits/stdc++.h>
using namespace std;

// ! reversing an array

void reverse(int i, int n,int arr[])
{

    if (i >= n/2)
        return;

    swap(arr[i], arr[n-i-1]);
    reverse(i + 1, n ,arr);
}

int main()
{

    int n = 5;
    int arr[n] = {1, 2, 3, 4,5};

    reverse(0, n,arr);

    for(auto it:arr){
        cout<<it<<" ";
    }
}