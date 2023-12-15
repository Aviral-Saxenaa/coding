#include <bits/stdc++.h>
using namespace std;

int main(){
        int n=5;
        int arr[n]={1,8,2,4,3};
        int ans[n];

        stack<int>s1;

        for(int i=n-1;i>=0;i--){
                while(!s1.empty() && arr[i]<=s1.top()){
                        s1.pop();
                }

                if(s1.empty()){
                        ans[i]=-1;
                        s1.push(arr[i]);
                }
                else if(arr[i]>s1.top()){
                        ans[i]=s1.top();
                        s1.push(arr[i]);
                }
        }

        for(int i=0;i<n;i++) cout<<ans[i]<<' ';
}