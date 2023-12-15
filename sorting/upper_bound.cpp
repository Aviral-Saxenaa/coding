#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n = 9;
   int arr[n]={1,4,4,4,4,9,9,10,11};

   int x;cin>>x;

   int ind=upper_bound(arr,arr+n,x)-arr;
   int ans=ind-1;
   if(arr[ans]!=x || ans<0) cout<<-1;
   else cout<<ind;

   return 0;
}
