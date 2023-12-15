#include <bits/stdc++.h>
using namespace std;

const int N=1e7+10;
vector<int>prime(N,1);
int main()
{
    vector<int>hp(N,0),lp(N,0);
    prime[0]=prime[1]=0;
    for(int i=2;i<=N;i++){
        if(prime[i]==1){
            lp[i]=hp[i]=i;
            for(int j=2*i;j<=N;j+=i){     //lowest and highest prime
                prime[j]=0;
                hp[j]=i;
                if(lp[j]==0){
                    lp[j]=i;
                }
            }
        }
    }

    int n;cin>>n;
    vector<int>prime_factors;
    

    while(n>1){
        int prime_factor=lp[n];
        while(n%prime_factor==0){
            prime_factors.push_back(prime_factor);
            n/=prime_factor;
        }
    }

    for(auto it:prime_factors){
        cout<<it<<" ";
    }
    
return 0;
}