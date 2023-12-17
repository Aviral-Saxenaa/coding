#include <bits/stdc++.h>
using namespace std;

int pivotind(int n,int arr[],int totsum){
        int lsum=0;
        int rsum=totsum;

        for(int i=0;i<n;i++){
                rsum-=arr[i];
                if(lsum==rsum){
                        return i;
                        break;
                }
                else{
                        lsum+=arr[i];
                }
        }
        return -1;
}

int main()
{
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin>>arr[i];
        int totsum=0;
        for (int i = 0; i < n; i++) totsum+=arr[i];
        int ans=pivotind(n,arr,totsum);
        cout<<ans;
}
