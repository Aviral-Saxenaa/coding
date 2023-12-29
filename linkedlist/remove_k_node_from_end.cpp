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

void delete_k_node(Node *&head, int k)
{

        Node *temp = head;
        int count = 0;
        int newcounter = 0;
        Node *prevnode = nullptr;

        while (temp != nullptr)
        {
                count++;
                temp=temp->next;
        }
        // cout<<count<<endl;
        temp = head;
        int res = (count - k + 1);   
        // cout<<res<<endl;   
        if (res == 1)
        {
                head = head->next;
                temp->next = nullptr;
                // delete (temp);
        }
        
        else
        {
                while (temp->next != nullptr)
                {
                        
                        newcounter++;
                        if (newcounter == res)
                        {
                                break;
                        }
                        prevnode = temp;
                        temp = temp->next;
                }
                
                        prevnode->next=temp->next;
                        temp->next=nullptr;
                        // delete(temp);
                
        }
        return;
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

        delete_k_node(head, 1);
        print(head);
}