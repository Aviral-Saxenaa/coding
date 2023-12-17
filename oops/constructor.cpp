#include <bits/stdc++.h>
using namespace std;

class demo{
        private:
        int x,y;
        static int totallevel;
        public:
        //! static keyword are not the part of objects but any object can use its value 
        // static members can be private ,protected,public
        static int totalmarks;
        demo(){
                cout<<"default constructor called \n"; 
                //!default constructor
                // automatically invoked when object of this class is created
        }
        demo(int x,int y){
                // cout<<this<<endl;;
                //! this keyword is used to store the address of current object(here : obj)
                this->x=x;
                this->y=y;
        }
        void getdata(){
                cout<<"value of x is "<<x<<endl;
                cout<<"value of y is "<<y<<endl;
                cout<<"value of totalmarks is "<<totalmarks<<endl;
                cout<<"value of totallevel is "<<totallevel;

        }

};

int demo :: totalmarks=100; //syntax for static members
int demo :: totallevel=50;

int main(){
        demo a;
        demo*obj=new demo(10,11);
        obj->getdata();

        // for static keyword
        cout<<endl<<"static value : "<<demo::totalmarks<<endl;
}