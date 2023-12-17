#include <bits/stdc++.h>
using namespace std;

class demo
{

        int data;
        char level;
        //! getters and setters
        public:
        demo(){
                
        }
        void setdata(int data, char level)
        {
                if (level == 'A')
                {
                        this->data=data;
                        this->level=level;
                }
                else
                {
                        this->data=2;
                        this->level='B';
                }
        }
        void getdata()
        {
                cout << "data is " << data;
                cout << "level is " << level;
        }
        demo(int data,int level){
                // cout<<this<<endl;;
                //! this keyword is used to store the address of current object(here : obj)
                this->data=data;
                this->level=level;
        }
};

int main()
{
        // static allocation
        demo x;
        x.setdata(1, 'b');
        x.getdata();
        cout<<endl;
        //dynamic allocation
        demo*ptr=new demo(1,'s');
        ptr->getdata();


}

//todo NOTE IMP POINTS:

//!-> always use default constructor when using parameterised constructor with getters and setters
//!-> Make sure that the internal data members are private or protected
//!-> Include a default constructor if it makes sense for your class
//!-> If your class involves dynamic memory allocation (e.g., using new), remember to handle memory deallocation (e.g., using delete) appropriately to avoid memory leaks.
