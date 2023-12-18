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
                this->next = 0;
        }
};

void print(Node *&head)
{
        Node *temp = head;
        while (temp != 0)
        {
                cout << temp->data << ' ';
                temp = temp->next;
        }
}

void InsertatBeg(Node *&head, int d)
{
        Node *newnode = new Node(d);
        newnode->next = head;
        head = newnode;
}
int total_length(Node *head)
{
        Node *temp = head;
        int count = 0;
        while (temp != 0)
        {
                count++;
                temp = temp->next;
        }
        return count;
}
void InsertatEnd(Node *&head, int d, Node *&tail)
{
        Node *newnode;
        if (head == 0)
        {
                newnode = new Node(d);
                head = newnode;
                tail = newnode;
        }
        else
        {
                newnode = new Node(d);
                tail->next = newnode;
                tail = tail->next;
        }
}

void InsertatPos(int pos, Node *&head, int d, Node *&tail)
{
        if (pos <= 0 || pos > total_length(head) + 1)
        {
                cout << "Invalid position" << endl;
                return;
        }

        if (pos == 1)
        {
                InsertatBeg(head, d);
                return;
        }
        else if (pos == total_length(head) + 1)
        {
                InsertatEnd(head, d, tail);
                return;
        }

        int i = 1;
        Node *temp = head;
        while (i < pos - 1)
        {
                temp = temp->next;
                i++;
        }
        Node *newnode = new Node(d);
        newnode->next = temp->next;
        temp->next = newnode;
}
void del_start(Node *&head, Node *&tail)
{
        Node *temp = head;
        if (head == 0)
        {
                cout << "empty";
        }
        else if (temp == head)
        {
                head = head->next;
                if (!head) // If the list is now empty, update tail
                        tail = 0;
                delete temp;
        }
        else
        {
                head = head->next;
                delete temp;
        }
}

void DelatEnd(Node *&head, Node *&tail)
{
    Node *temp = head;

    if (head == 0)
    {
        cout << "empty";
    }
    else if (temp == head)
    {
        head = 0;
        tail = 0;
        delete temp;
    }
    else
    {
        Node *prevnode = 0;
        while (temp != 0)
        {
            prevnode = temp;
            temp = temp->next;
        }
        tail = prevnode;

        prevnode->next = 0;
        delete temp;
    }
}



int main()
{
        Node *node1 = new Node(1);
        Node *head = node1;
        Node *tail = node1;
        InsertatBeg(head, 2);
        InsertatEnd(head, 3, tail);
        InsertatPos(4, head, 4, tail);
        print(head);
        cout << endl;
        cout << "total length is " << total_length(head) << endl;
        // del_start(head,tail);
        DelatEnd(head, tail);
        // del_at_pos(2, head, tail);
        print(head);
}