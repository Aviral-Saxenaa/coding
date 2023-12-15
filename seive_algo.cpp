#include <bits/stdc++.h>
using namespace std;

const int N=1e7+10;

vector<bool> isprime(N,1);

int main()
{
    int n;
    cin>>n;

    isprime[0]=isprime[1]=false;

    for(int i=2;i<n;i++){
        if(isprime[i]==true){
            for(int j=2*i;j<=n;j+=i){
                isprime[j]=false;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(isprime[i]){
            cout<<i<<" is prime\n";
        }
        else{
            cout<<i<<" is notprime\n";
        }
    }
}