#include <bits/stdc++.h>

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

bool find_sol(int a,int b,int c,int &x,int &y){
    int x0,y0;

    int g=extgcd(abs(a),abs(b),x0,y0);

    if(c%g!=0){
        return false;
    }

    x=x0*(c/g); 
    y=y0*(c/g);

    if(a<0) x=-x;
    if(b<0) y=-y;
    return true;

}

int main(){
    int a,b,c,x,y,g;
    cout<<" enter a b and c\n";
    cin>>a>>b>>c;

    if(find_sol(a,b,c,x,y)==false){
        cout<<"no sol\n\n";
    }
    else{
        // cout<<"gcd is "<<g<<endl;
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
}