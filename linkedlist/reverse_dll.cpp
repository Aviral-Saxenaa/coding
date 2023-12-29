#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
        int data;
        Node *next;
        Node *prev;

        Node(int data)
        {
                this->data = data;
                this->prev = nullptr;
                this->next = nullptr;
        }
};

void insert_in_doublyll(Node *&head, int data)
{

        Node *newnode = new Node(data);
        Node *temp = head;
        while (temp->next != nullptr)
        {
                temp = temp->next;
        }
        newnode->prev = temp;
        temp->next = newnode;
}

void print_ll(Node *&head)
{
        Node *temp = head;

        while (temp != nullptr)
        {
                cout << temp->data;
                temp = temp->next;
        }
}

//! Method 1

// void reverse_ll(Node*&head)
// {
//         Node*temp=head;
//         stack<int>st;
//         while(temp!=nullptr){
//                 st.push(temp->data);
//                 temp=temp->next;
//         }

//         temp=head;
//         while(temp!=nullptr){
//                 temp->data=st.top();
//                 st.pop();
//                 temp=temp->next;
//         }
// }

//! Method 2

void reverse_ll(Node *&head)
{

        Node *current = head;
        Node *temp=nullptr;
        while (current != nullptr)
        {
                temp = current->prev;
                current->prev = current->next;
                current->next = temp;

                current = current->prev;
        }
        head=temp->prev;
}

int main()
{
        Node *head = new Node(1);
        insert_in_doublyll(head, 2);
        insert_in_doublyll(head, 3);
        insert_in_doublyll(head, 4);
        print_ll(head);
        cout << endl;
        reverse_ll(head);
        print_ll(head);
}