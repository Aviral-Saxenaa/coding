#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int n=s.length();

    int n1=(pow(2,n)-1);
    for(int num=0;num<=n1;num++){
        string sub="";
        for(int j=0;j<n;j++){
            if(num&(1<<j)){
                sub+=s[j];
            }
        }
        cout<<sub<<endl;
    }
return 0;
}