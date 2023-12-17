#include <bits/stdc++.h>
using namespace std;

class demo{
        private:
        int x,y;

        public:
        demo(){
                cout<<"default \n";
        }
        ~demo(){
                cout<<"destructor called\n";
        }
};

int main(){
        //Static
        demo x;

        //Dynamic
        demo*ptr=new demo();
        delete ptr;
}


//! note
// destructor is used for memory deallocation
//syntax same as constructor with ~ sign
//for static object creation no destructor will be automatically called but for dynamic we have to call it manually