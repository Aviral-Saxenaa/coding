#include<bits/stdc++.h>
using namespace std;

void binarysearch(int n,int arr[],int x){
        int l=0;
        int h=n-1;

        while(l<=h){
                int mid=(l+h)/2;

                if(arr[mid]==x){
                        cout<<mid;
                        break;
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
        int arr[n]={1,2,3,4,5};
        int x;cin>>x;
        binarysearch(n,arr,x);
        
}