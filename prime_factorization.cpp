#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> prime_factorization;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            prime_factorization.push_back(i);
            n/=i;
        }
    }
    if(n>1){
        prime_factorization.push_back(n);
    }
    for(auto it:prime_factorization){
        cout<<it<<" ";
    }
return 0;
}