#include <bits/stdc++.h>
using namespace std;

void insert_at_corr(stack<int>&s,int val){
        if(s.size()==0 || s.top()<val){
                s.push(val);
        }
        else{
                int temp=s.top();
                s.pop();
                insert_at_corr(s,val);
                s.push(temp);
        }
}

void reversestack(stack<int>&s){
        if(!s.empty()){
                int temp=s.top();
                s.pop();
                reversestack(s);
                insert_at_corr(s,temp);
        }
}

int main(){
        stack<int> myStack;

    // Push elements onto the stack
    myStack.push(1);
    myStack.push(21);
    myStack.push(3);
    myStack.push(4);
    reversestack(myStack);

    while(myStack.size()!=0){
        cout<<myStack.top()<<" ";
        myStack.pop();
    }

}