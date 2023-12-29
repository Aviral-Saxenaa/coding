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

void reverse(Node*&head){
        Node*temp=head;
        Node*prevnode=nullptr;
        Node*nextnode=nullptr;

        while(temp!=nullptr){
                nextnode=temp->next;
                temp->next=prevnode;
                prevnode=temp;
                temp=nextnode;
        }
        head=prevnode;
}


int main()
{
        Node *head = new Node(2);
        insert(4, head);
        insert(5, head);
        
        print(head);
        cout << endl;
        reverse(head);
        print(head);
}