#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
        int data;
        Node *next;
        Node *back;

        Node(int data)
        {
                this->data = data;
                this->next = nullptr;
                this->back = nullptr;
        }
};

void del_from_start(Node *&head)
{
        Node *prev = head;
        if (head == nullptr || head->next == nullptr)
        {
                head = nullptr;
                cout << "empty\n";
        }

        else
        {
                head = head->next;
                head->back = prev;
                prev->next = 0;
        }
        return;
}

void delete_at_end(Node *&head)
{
        if (head == nullptr || head->next == nullptr)
        {
                head = nullptr;
                cout << "empty\n";
        }
        else
        {
                Node *tail = head;
                Node *prevnode = nullptr;
                while (tail->next != nullptr)
                {

                        tail = tail->next;
                }
                prevnode = tail->back;
                tail->back = nullptr;
                prevnode->next = nullptr;
        }
}

void delete_at_pos(Node *&head, int pos)
{
        Node *temp = head;
        int counter = 0;

        while (temp->next != 0)
        {
                counter++;
                if (counter == pos)
                {
                        break;
                }
                temp = temp->next;
        }

        Node *prevnode = temp->back;
        Node *nextnode = temp->next;

        if (prevnode == nullptr && nextnode == nullptr)
        {
                cout << "empty\n";
                delete (temp);
        }
        else if (prevnode == nullptr)
        {
                del_from_start(head);
        }
        else if (nextnode == nullptr)
        {
                delete_at_end(head);
        }
        else
        {
                prevnode->next = nextnode;
                nextnode->back = prevnode;
                temp->next = nullptr;
                temp->back = nullptr;
                delete (temp);
        }

        return;
}

// delete a specific node which is not head

void delete_specific_node(Node *given)
{

        Node *prevnode = given->back;
        Node *nextnode = given->next;

        if (nextnode == nullptr)
        {
                prevnode->next = nullptr;
                given->back = nullptr;
                free(given);
        }
        else
        {
                prevnode->next = nextnode;
                nextnode->back = prevnode;
                given->next = nullptr;
                given->back = nullptr;
                free(given);
        }
        return;
}

void converttoll(vector<int> arr, Node *&head)
{
        Node *prev = head;
        for (int i = 1; i < arr.size(); i++)
        {
                Node *temp = new Node(arr[i]);
                prev->next = temp;
                temp->back = prev;
                prev = prev->next;
        }
}

// insertion before the head

void insert_before_head(Node *&head, int val)
{
        Node *newnode = new Node(val);

        if (head == nullptr)
        {
                head = newnode;
        }
        else
        {
                head->back = newnode;
                newnode->next = head;
                head = newnode;
        }
}

void insert_before_tail(Node *&head, int val)
{
        Node *newnode = new Node(val);
        Node*temp=head;
        if (head == nullptr)
        {
                head = newnode;
        }
        else
        {
                while(temp->next!=nullptr){
                        
                        temp=temp->next;
                }
                Node*prevnode=temp->back;
                newnode->next=prevnode->next;
                newnode->back=prevnode;
                prevnode->next=newnode;
                temp->back=newnode;
        }
}

void insert_before_k_node(Node*&head,int val,int k){

        Node *newnode = new Node(val);
        Node*temp=head;

        if(k==1){
                insert_before_head(head,val);
        }

        int counter=0;
        while(temp->next!=nullptr){
                counter++;
                if(counter==k){
                        break;
                }
                temp=temp->next;
        }
        Node*prevnode=temp->back;

        newnode->back=prevnode;
        newnode->next=temp;
        temp->back=newnode;
        prevnode->next=newnode;

        
}

void insert_before_given_node(Node*given,int val){

        Node*newnode=new Node(val);
        Node*prevnode=given->back;
        newnode->back=prevnode;
        newnode->next=given;
        prevnode->next=newnode;
        given->back=prevnode;

}

void print(Node *&head)
{
        Node *temp = head;
        while (temp != nullptr)
        {
                cout << temp->data << ' ';
                temp = temp->next;
        }
}

int main()
{
        vector<int> arr = {1, 2, 3, 4, 5};
        Node *head = new Node(arr[0]);
        converttoll(arr, head);
        print(head);
        cout << endl;
        insert_before_given_node(head->next,6);
        print(head);

        return 0;
}