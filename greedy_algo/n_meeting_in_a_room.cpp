#include <bits/stdc++.h>
using namespace std;

struct meeting{
    int start;
    int end;
    int pos;
};

bool comparator(struct meeting m1,struct meeting m2){
    if(m1.end<m2.end) return true;
    else if(m1.end>m2.end) return false;
    else if(m1.pos<m2.pos) return true;
    else if(m1.pos>m2.pos) return false;
}

int main()
{
    int n;cin>>n;
    struct meeting meet[n];

    
    int s[n],e[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        cin>>e[i];
    }
    for(int i=0;i<n;i++){
        meet[i].start=s[i];
        meet[i].end=e[i];
        meet[i].pos=i+1;
    }

    sort(meet,meet+n,comparator);

    vector<int>answer;
    int count=0;
    int limit=meet[0].end;
    answer.push_back(meet[0].pos);

    for(int i=1;i<n;i++){
        if(meet[i].start>limit){
            count++;
            limit=meet[i].end;
            answer.push_back(meet[i].pos);
        }
    }

    for(int i=0;i<answer.size();i++){
            cout<<answer[i]<<" ";
    }
    cout<<endl;

    cout<<(count+1);

return 0;
}