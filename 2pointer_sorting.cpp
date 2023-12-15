#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {-10,-3,2,5,6};

    int i,j=n-1;

    vector<int>v;

    while (i<=j)
    {
        /* code */
        if(abs(arr[i])>=abs(arr[j])){
            v.push_back(arr[i]*arr[i]);
            i++;
        }
        else{
            v.push_back(arr[j]*arr[j]);
            j--;
        }
    }

    reverse(v.begin(),v.end());

    for (auto it : v)
    {
        cout << it << " ";
    }
}
