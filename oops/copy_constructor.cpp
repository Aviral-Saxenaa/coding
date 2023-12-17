#include <bits/stdc++.h>
using namespace std;

class demo{
        private:
        int x,y;
        string name;

        public:
        demo(int x,int y,string name){
                this->x=x;
                this->y=y;
                this->name=name;
        }
        demo(){
                cout<<"default \n";
        }
        //copy constructor
        demo(demo &temp){
                cout<<"copy constructor called \n";
                this->x=temp.x;
                this->y=temp.y;
                this->name=temp.name;
        }
        void print(){
                cout<<"x is "<<x<<endl<<"y is "<<y<<endl<<"name is "<<name<<endl;

        }
};

int main(){
        demo obj(1,2,"as");

        obj.print();
        demo obj2(obj);
        obj2.print();

        demo obj3=obj;
        obj3.print();
}