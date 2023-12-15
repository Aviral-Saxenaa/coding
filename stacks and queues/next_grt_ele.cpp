#include <bits/stdc++.h>
using namespace std;

//! Brute force approach
// int main(){
//         int n=5;
//         int arr[n]={6,8,0,1,3};
//         int ans[n];
//         for(int i=0;i<n-1;i++){
//                 for(int j=i+1;j<n;j++){
//                         if(arr[j]>arr[i]){
//                                 ans[i]=arr[j];
//                                 break;
//                         }
//                         else{
//                                 ans[i]=-1;
//                         }
//                 }
//         }
//         ans[n-1]=-1;
//         for(auto i:ans) cout<<i<<' ';
// }

//! stack

int main()
{
        int n = 5;
        int arr[n] = {6, 8, 0, 1, 3};
        int ans[n];

        stack<int> s1;
        for (int i = n - 1; i >= 0; i--)
        {
                while (!s1.empty() && arr[i] >= s1.top())
                {
                        s1.pop();
                }
                if (s1.empty())
                {
                        ans[i] = -1;
                        s1.push(arr[i]);
                }
                else if (arr[i] < s1.top())
                {
                        ans[i] = s1.top();
                        s1.push(arr[i]);
                }
        }
        for (auto i : ans)
        {
                cout << i << " ";
        }
}