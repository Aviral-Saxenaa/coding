#include <bits/stdc++.h>
using namespace std;

const int n = 5;
int queu[5];
int front = -1, rear = -1;

bool isfull() {
    return (rear == front - 1 || (front == 0 && rear == n - 1));
}

void push(int x){
        if(isfull()){
                cout<<"full \n";
        }
        else if(front==-1){
                front=rear=0;
                queu[rear]=x;
        }
        else if(rear==n-1 && front!=0){
                rear=0;
                queu[rear]=x;
        }
        else{
                rear++;
                queu[rear]=x;
        }
}

void popitis(){
        if(front==-1){
                cout<<"empty\n";
        }
        else if(front==rear){
                
                cout<<"popped ele is "<<queu[front]<<endl;
                front=rear=-1;
        }
        else if(front==n-1){
                
                cout<<"popped ele is "<<queu[front]<<endl;
                front=0;
        }
        else{
                
                cout<<"popped ele is "<<queu[front]<<endl;
                front++;
        }
}

void display(){
        if(front==-1) cout<<"empty\n";
        else{
        for(int i=front;i<=rear;i++){
                cout<<queu[i]<<' ';
        }}
}

int main()
{
        push(1);
        push(2);
        push(3);
        push(4);
        push(5);
        popitis();
        popitis();
        popitis();
        popitis();
        popitis();
        popitis();
       
        display();
}