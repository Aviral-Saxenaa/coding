#include <bits/stdc++.h>
using namespace std;

const int N=1e7+10;

vector<int>isprime(N,1);

void all_primes(int k){
    vector <int>all_prime;
    
    for(int i=0;i<isprime.size();i++){
        if(isprime[i]==1){
            all_prime.push_back(i);
        }
    }

    cout<<all_prime[k-1];
}

void check_prime(int n){
    isprime[0]=isprime[1]=0;

    for(int i=2;i<=n;++i){
        if(isprime[i]==1){
            for(int j=2*i;j<=n;j+=i){
                isprime[j]=0;
            }
        }
    }
    
}

int main()
{
    int n;
    cout<<"enter no";
    cin>>n;
    check_prime(n);
    if(isprime[n]==0){
        cout<<"not prime\n";
    }
    else{
        cout<<"prime\n";
    }
    int k;
    cout<<"enter kth no";
    cin>>k;
    all_primes(k);
    

return 0;
}