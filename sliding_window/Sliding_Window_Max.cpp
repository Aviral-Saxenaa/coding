#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,k;
    cin>>n1>>k;
    int arr1[n1];

    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int i=0,j=0;
    int maxi=INT_MIN;
    
    list<int> l;

    while(j<n1){
        if(arr[j]>maxi){
            l.push_back(arr[j]);
        }
        if(j-i+1<k){
            j++;
        }
        else{
            ans.push_back(maxi);
            if(maxi==arr[i]){

            }
        }
    }
    for(auto it: ans){
        cout<<it<<endl;
    }
return 0;
}