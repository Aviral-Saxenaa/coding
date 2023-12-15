#include <bits/stdc++.h>
using namespace std;

queue<int> q1;
queue<int> q2;

void display()
{
        while (!q1.empty())
        {
                cout << q1.front() << ' ';
                q1.pop();
        }
}

void popis(){
        q1.pop();
}

void topitis(){
        cout<<q1.front();
}

void push(int x)
{

        while (!q1.empty())
        {

                q2.push(q1.front());
                q1.pop();
        }
        q1.push(x);
        while (!q2.empty())
        {

                q1.push(q2.front());
                q2.pop();
        }
        
}

int main()
{

        int x;
        cout << "write no of elements to push \n";
        cin >> x;
        while(x--){
                int y;
                cin>>y;
                push(y);
        }
        popis();
        topitis();
        display();
}