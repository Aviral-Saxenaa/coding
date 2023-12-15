#include <bits/stdc++.h>
using namespace std;

const int N=1e7+10;
vector<int>prime(N,1);
int main()
{
    int n;cin>>n;
    vector<int>hp(N,0),lp(N,0);
    prime[0]=prime[1]=0;
    for(int i=2;i<=n;i++){
        if(prime[i]==1){
            lp[i]=hp[i]=i;
            for(int j=2*i;j<=n;j+=i){     //lowest and highest prime
                prime[j]=0;
                hp[j]=i;
                if(lp[j]==0){
                    lp[j]=i;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<i<<" "<<lp[i]<<" "<<hp[i]<<endl;
    }
    
return 0;
}