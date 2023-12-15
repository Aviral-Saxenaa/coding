#include <bits/stdc++.h>
using namespace std;


string rev_str(string str){

        stack<char>temp;
        for(int i=0;i<str.length();i++){
               
                temp.push(str[i]);
        }
        string ans="";

        while(!temp.empty()){
                ans+=temp.top();
                temp.pop();
        }
        return ans;
}

int main(){
        string str="Hello";
        string ans=rev_str(str);
        cout<<ans;
}