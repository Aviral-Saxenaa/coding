// Maximum Rectangular Area in a Histogram

#include <bits/stdc++.h>
using namespace std;

int main(){
        int n=5;
        int arr[n]={6,2,5,4,5,1,6};
        int maxi=0;
        for(int i=0;i<n;i++){
                int min_height=arr[i];
                for(int j=i;j<n;j++){
                        min_height=min(min_height,arr[j]);

                        int area=(min_height*(j-i+1));

                        maxi=max(maxi,area);
                }
        }
        cout<<maxi;
}