#include<bits/stdc++.h>
using namespace std;

void lastocc(int n,int arr[],int x,int &ans){
        int l=0;
        int h=n-1;

        while(l<=h){
                int mid=(l+h)/2;

                if(arr[mid]==x){
                        ans=mid;
                        l=mid+1;
                        
                }
                else if(arr[mid]<x){
                        l=mid+1;
                }
                else{
                        h=mid-1;
                }
        }
}

void firstocc(int n,int arr[],int x,int &ans){
        int l=0;
        int h=n-1;

        while(l<=h){
                int mid=(l+h)/2;

                if(arr[mid]==x){
                        ans=mid;
                        h=mid-1;
                }
                else if(arr[mid]<x){
                        l=mid+1;
                }
                else{
                        h=mid-1;
                }
        }
}

int main(){
        int n=5;
        int arr[n]={0,1,1,5};
        int x;cin>>x;int ans=-1;
        firstocc(n,arr,x,ans);
        cout<<ans<<endl;
        lastocc(n,arr,x,ans);
        cout<<ans<<endl;
}