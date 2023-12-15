#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int no = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        no ^= arr[i];
    }
    int a=0,b=0;
    int rmsb = (no & ~(no - 1));
    for(int i=0;i<n;i++){
        if(rmsb & arr[i]){
            a^=arr[i];
        }
        else{
            b^=arr[i];
        }
    }

    cout<<a<<" "<<b;

    return 0;
}
