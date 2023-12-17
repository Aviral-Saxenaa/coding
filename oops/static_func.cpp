#include <bits/stdc++.h>
using namespace std;

class demo{
        private:

        int x,y;
        static int totallevel;
        static int totalmarks;


        public:
        
        demo(int x,int y){
                this->x=x;
                this->y=y;
        }
        void getdata(){
                cout<<"value of x is "<<x<<endl;
                cout<<"value of y is "<<y<<endl;
                cout<<"value of totalmarks is "<<totalmarks<<endl;
                cout<<"value of totallevel is "<<totallevel<<endl;

        }

        //! static member func can only access static members
        //! no this keyword bcoz no object in static func

        static void random(){
                cout<<totallevel<<" and "<<totalmarks<<" are 2 static keywords "<<endl;
        }

};

int demo :: totalmarks=100; 
int demo :: totallevel=50;

int main(){
        demo obj(1,2);
        obj.getdata();
        demo::random();
}