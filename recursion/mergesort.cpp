#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r) {
    vector<int> v;
    int i = l;
    int j = mid + 1;

    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j]) {
            v.push_back(arr[i]);
            i++;
        } else {
            v.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid) {
        v.push_back(arr[i]);
        i++;
    }
    while (j <= r) {
        v.push_back(arr[j]);
        j++;
    }

    for (int x = l; x <= r; x++) {
        arr[x] = v[x - l];  // corrected index
    }

    
}

void merge_sort(int arr[],int l,int r){
        if(l==r) return;
        else{
                int mid=(l+r)/2;
                merge_sort(arr,l,mid);
                merge_sort(arr,mid+1,r);
                merge(arr,l,mid,r);
        }
}

int main(){
        int n;
        cout<<"enter no of elements";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        merge_sort(arr,0,n-1);

        for(int i=0;i<n;i++){
                cout<<arr[i]<<' ';
        }
}