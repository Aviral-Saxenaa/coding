#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int arr[n]={3,1,5,2,4};
    
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=temp;
    }

    for(auto it:arr){
        cout<<it<<" ";
    }
return 0;
}