#include <bits/stdc++.h>
using namespace std;

int main(){
        stack<int>s;

        //push
        s.push(1);
        s.push(2);

        //pop
        s.pop();

        //top
        cout<<"top element is "<<s.top();

        //empty or not
        if(s.empty()){
                cout<<"empty";
        }
        else{
                cout<<"not empty";
        }

        //size
        cout<<s.size();
}