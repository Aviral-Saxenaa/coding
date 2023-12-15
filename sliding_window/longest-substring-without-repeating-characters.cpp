#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();

    unordered_map<char,int>m;

    int i=0,j=0,ans=INT_MIN;

    while(j<n){
        ++m[s[j]];
        
        if(m.size()==(j-i+1)){
            ans=max(ans,j-i+1);
            j++;
        }
        else if(m.size()<(j-i+1)){
            m[s[i]]--;
            if(m[s[i]]==0) {
                m.erase(s[i]);
            }
            i++;
        }
        j++;
    }
    cout<<ans;
return 0;
}