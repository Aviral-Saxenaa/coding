#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first){
        return a.first<b.first;
    }
    return b.second<a.second;
}

int main()
{
    int n;cin>>n;
    vector<pair<int,int>> p(n);

    for(int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    cout<<endl;
    sort(p.begin(),p.end(),comparator);    

    for(int i=0;i<n;i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }

return 0;
}