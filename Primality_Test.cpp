#include <bits/stdc++.h>
using namespace std;


bool isprime(int n){

    if(n<=1) return false;

    for(int i=2;i<=sqrt(n);i++){
        
        if(n%i==0) return false;
        
    }
    return true;
}

int main()
{
    int n;
    cout<<"enter no";
    cin>>n;
    

    if(isprime(n)){
        cout<<"prime\n\n";
    }
    else{
        cout<<"not prime\n\n";
    }

return 0;
}