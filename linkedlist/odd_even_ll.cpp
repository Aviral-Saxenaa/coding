#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
        int data;
        Node *next;

        Node(int data)
        {
                this->data = data;
                this->next = nullptr;
        }
};

void insert(int val, Node *&head)
{
        Node *temp = head;
        while (temp->next != nullptr)
        {
                temp = temp->next;
        }
        Node *newnode = new Node(val);
        temp->next = newnode;
}

void print(Node *&head)
{
        Node *temp = head;
        while (temp != nullptr)
        {
                cout << temp->data;
                temp = temp->next;
        }
}

// void mixing(Node*&odd,Node*&even){
//         Node*tempe=odd;
//         while(tempe->next!=nullptr){
//                 tempe=tempe->next;
//         }
//         tempe->next=even;
//         print(odd);
// }

// void odd_even(Node*&head){
//         Node*temp=head;

//         Node*newoddnode=new Node(-1); //dummy nodes
//         Node*newevennode=new Node(-1);//dummy nodes
//         Node*curroddnode=newoddnode;
//         Node*currevennode=newevennode;

//         int counter=0;
//         while(temp!=nullptr){
//                 counter++;
//                 if(counter%2==1){ //odd
//                         Node*newnode=new Node(temp->data);
//                         curroddnode->next=newnode;
//                         curroddnode=curroddnode->next;
//                 }
//                 else{  //even
//                         Node*newnode=new Node(temp->data);
//                         currevennode->next=newnode;
//                         currevennode=currevennode->next;
//                 }
//                 temp=temp->next;
//         }
//         cout<<endl;
//         mixing(newoddnode->next,newevennode->next);
// }

//! approach 2 --> first store odd in vector then store even in vector then traverse ll and put vector value in ll

void odd_even(Node *&head)
{
        Node *temp = head;
        vector<int> v;

        // for odd
        while (temp != nullptr && temp->next != nullptr)
        {
                v.push_back(temp->data);
                temp = temp->next->next;
        }
        if (temp)
                v.push_back(temp->data);

        temp = head->next;
        while (temp != nullptr && temp->next != nullptr)
        {
                v.push_back(temp->data);
                temp = temp->next->next;
        }
        if (temp)
                v.push_back(temp->data);

        temp = head;
        int i = 0;
        while (temp != nullptr)
        {
                temp->data = v[i];
                i++;
                temp = temp->next;
        }
        
}

int main()
{
        Node *head = new Node(1);
        insert(2, head);
        insert(3, head);
        insert(4, head);
        insert(5, head);
        insert(6, head);
        print(head);
        cout << endl;
        odd_even(head);
        print(head);
}