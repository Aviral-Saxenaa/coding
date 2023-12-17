#include<bits/stdc++.h>
using namespace std;

//! for integer

int sqroot(int n){
        int l=0;
        int r=n;
        int ans=0;
        while(l<=r){
                int mid=(l+r)/2;
                if((mid*mid)==n){
                        ans=mid;
                        
                        break;
                }
                else if((mid*mid)<n){
                        ans=mid;
                        l=mid+1;
                }
                else{
                        r=mid-1;
                }
                
        }
        return ans;
}

//! for decimal
double moreprecision(int n,int topoint,int temp){
        double factor=1;
        double ans= temp;
        for(int i=0;i<topoint;i++){
                factor/=10;
                for(double j=temp;j*j<n;j=j+factor){
                        ans=j;
                }
        }
        return ans;
}

int main(){
        int n;
        cin>>n;
        int temp=sqroot(n);
        int topoint=3;
        cout<<moreprecision(n,topoint,temp);
}