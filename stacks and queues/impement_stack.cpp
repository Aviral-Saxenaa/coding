#include <bits/stdc++.h>
using namespace std;

int arr[100], n = 100, top = -1;

void push(int val)
{
        if (top == n)
        {
                cout << "arr is full\n";
        }
        else
        {
                top++;
                arr[top] = val;
        }
}

void pop()
{
        if (top == -1)
        {
                cout << "arr is empty \n";
        }
        else
        {
                cout << "popped elemne tis " << arr[top] << "\n";
                top--;
        }
}

void display()
{
        if (top > -1)
        {
                for(int i=top;i>=0;i--){
                        cout<<arr[i]<<" ";
                }
        }
        else
        {
                cout << "arr is empty \n";
        }
}

void topitis()
{
        if (top > -1)
        {
                cout << arr[top] << "\n";
        }
        else
        {
                cout << "empty";
        }
}

int main()
{

        int val;
        cout << "1) Push in stack" << endl;
        cout << "2) Pop from stack" << endl;
        cout << "3) Display stack" << endl;
        cout << "4) Top of stack" << endl;
        cout << "5) Exit" << endl;
        int no;
        do
        {
                cout<<"\nenter choice\n";
                cin >> no;

                switch (no)
                {
                case 1:
                        cout << "enter value to be pushed";
                        cin >> val;
                        push(val);
                        break;

                case 2:
                        pop();
                        break;

                case 3:
                        cout << "Displaying stack \n";
                        display();
                        break;

                case 4:
                        cout << "Top is \n";
                        topitis();
                        break;

                case 5:
                        cout << "Exiting stack";
                        break;
                }
        } while (no != 4);
}