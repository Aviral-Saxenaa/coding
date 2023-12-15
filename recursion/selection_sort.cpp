#include<bits/stdc++.h>
using namespace std;

void selection_sort(int n,int arr[]){

        for(int i=0;i<n-1;i++){
                int min_ind=i;
                for(int j=i+1;j<n;j++){
                        if(arr[min_ind]>arr[j]){
                                min_ind=j;
                        }
                }
                swap(arr[min_ind],arr[i]);
        }
// min element as starting
}

int main(){
        int n;
        cout<<"enter no of elements";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        selection_sort(n,arr);

        for(int i=0;i<n;i++){
                cout<<arr[i]<<' ';
        }
}