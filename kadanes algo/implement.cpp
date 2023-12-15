//!
//! kadanes algo is used to fing largest contigous subaaray sum

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={1,4,-2,-4,7};

    int sum=0,maxi=INT_MIN;
    for(int i=0;i<5;i++){
        sum+=arr[i];
        maxi=max(maxi,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi;
return 0;
}