#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[n],k;
    cin >> n ;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin>>k;
    queue<int>d;
    vector<int> ans;
    int i=0,j=0;

    while(j<n){
        if(arr[j]<0){
            d.push(arr[j]);
        }
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            if(d.empty()){
                ans.push_back(0);
            }
            else{
                ans.push_back(d.front());
                if(arr[i]<0){
                    d.pop();
                }
            }
            i++;j++;
        }
    }
    for(auto it:ans)
    cout<<it<<" ";

}