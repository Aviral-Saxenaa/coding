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

void sorte(Node *&head)
{
        Node *temp = head;

        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

        while (temp != nullptr)
        {
                if (temp->data == 0)
                        count0++;
                if (temp->data == 1)
                        count1++;
                if (temp->data == 2)
                        count2++;
                temp = temp->next;
        }
        temp = head;
        while (temp != nullptr)
        {
                if (count0)
                {
                        temp->data = 0;
                        count0--;
                }
                else if (count1)
                {
                        temp->data = 1;
                        count1--;
                }
                else
                {
                        temp->data = 2;
                        count2--;
                }
                temp=temp->next;
        }
}

int main()
{
        Node *head = new Node(1);
        insert(0, head);
        insert(2, head);
        insert(1, head);
        insert(0, head);
        insert(2, head);
        insert(1, head);
        print(head);
        cout << endl;
        sorte(head);
        print(head);
}