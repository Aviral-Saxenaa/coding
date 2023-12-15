#include <iostream>
using namespace std;
int dequeue[100], n = 100, front = - 1, rear = - 1;

void insertfront(int x){
        if(isfull()){
                cout<<'full';
        }
        else if(front=-1){
                front=rear=0;
                dequeue[front]=x;
        }
        else{
                front=front-1;
                dequeue[front]=x;
        }
}

int main(){

}