#include <bits/stdc++.h>
using namespace std;

class demo{
        private:
        int x,y;

        public:
        demo(){
                cout<<"constructor called \n"; 
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
                cout<<"value of x is "<<x;
                cout<<"value of y is "<<y;
        }

};

int main(){
        demo a;
        demo*obj=new demo(10,11);
        
        obj->getdata();
}