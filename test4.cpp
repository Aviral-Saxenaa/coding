#include <iostream>
using namespace std;

int extgcd(int a,int b,int &x,int &y){

    if(b==0){
        x=1;
        y=0;
        return a;
    }

    int x1,y1;

    int d=extgcd(b,a%b,x1,y1);

    x=y1;
    y=x1-(a/b)*y1;

    return d;

}

int main()
{

    int a=2,b=4,x,y;

    int res=extgcd(a,b,x,y);

    cout<<res<<endl;
    cout<<"x is "<<x<<" y is "<<y<<"\n\n";
}