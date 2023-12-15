#include <bits/stdc++.h>
using namespace std;

int fact(int n){
        if(n==1) return 1;

        int total=fact(n-1);
        return (n*total);
}

int main(){
        int n;
        cin>>n;
        cout<<fact(n);
}