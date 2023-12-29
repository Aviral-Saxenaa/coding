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

void insert_in_ll1(Node*&head,int val){
        Node*temp=head;
        while(temp->next!=nullptr){
                temp=temp->next;
        }
        Node*newnode=new Node(val);
        temp->next=newnode;
}

void insert_in_ll2(Node*&head,int val){
        Node*temp=head;
        while(temp->next!=nullptr){
                temp=temp->next;
        }
        Node*newnode=new Node(val);
        temp->next=newnode;
}


void print_ll1(Node *&head)
{
        Node *temp = head;

        while (temp != nullptr)
        {
                cout << temp->data;
                temp = temp->next;
        }
}

void print_ll2(Node *&head)
{
        Node *temp = head;

        while (temp != nullptr)
        {
                cout << temp->data;
                temp = temp->next;
        }
}

void print_result(Node *result) {
    Node *temp = result; // Skip the dummy node
    while (temp != nullptr) {
        cout << temp->data;
        temp = temp->next;
    }
}

void add(Node*&head1,Node*&head2){
        Node*t1=head1;
        Node*t2=head2;
        int carry=0;
        Node*dummy=new Node(-1);
        Node*current=dummy;
        while(t1!=nullptr || t2!=nullptr){
                int sum=carry;
                if(t1){
                        sum+=t1->data;
                }
                if(t2){
                        sum+=t2->data;
                }
                Node*newnode=new Node(sum%10);
                carry=sum/10;
                current->next=newnode;
                current=current->next;
                

                if(t1){
                        t1=t1->next;
                }
                if(t2){
                        t2=t2->next;
                }
        }
        if(carry){
                Node*newnode=new Node(carry);
                current->next=newnode;
                current=current->next;
        }
        
        print_result(dummy->next);


}


int main()
{
        Node *head1 = new Node(9);
        Node *head2 = new Node(9);
        insert_in_ll1(head1, 9);
        insert_in_ll1(head1, 9);
        insert_in_ll1(head1, 9);
        insert_in_ll1(head1, 9);
        insert_in_ll1(head1, 9);
        insert_in_ll1(head1, 9);
        insert_in_ll2(head2, 9);
        insert_in_ll2(head2, 9);
        insert_in_ll2(head2, 9);
        
        print_ll1(head1);
        cout<<endl;
        print_ll2(head2);
        cout << endl;
        add(head1,head2);
}