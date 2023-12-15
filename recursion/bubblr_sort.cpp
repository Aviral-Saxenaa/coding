#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n){

        for(int i=0;i<n-1;i++){
                for(int j=0;j<n-i-1;j++){
                        if(arr[j]>arr[j+1]){
                                int temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;
                        }
                }
        }

        // max elemenet at last

}

int main(){
        int n;
        cout<<"enter no of elements";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        bubblesort(arr,n);
for(int i=0;i<n;i++){
                cout<<arr[i]<<' ';
        }
        
}