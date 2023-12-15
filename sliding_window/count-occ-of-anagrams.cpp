#include <bits/stdc++.h>
using namespace std;
int main()
{
string txt,pat;
cin>>txt>>pat;
int l=pat.length();
int n=txt.length();

map<char,int>mg;
for(int i=0;i<l;i++){
    mg[pat[i]]++;
}

int count=mg.size();

int i=0,j=0,ans=0;

while(j<n){
    if(mg.find(txt[j])!=mg.end()){
        mg[txt[j]]--;
        if(mg[txt[j]]==0){
            count--;
        }
    }
    if(j-i+1<l){
        j++;
    }
    else if(j-i+1==l){
        if(count==0){
            ans++;
        }
        if(mg.find(txt[i])!=mg.end()){
            mg[txt[i]]++;
            if(mg[txt[i]]==1){
                count++;
            }
        }
        i++;j++;
    }
}

cout<<ans;

return 0;
}