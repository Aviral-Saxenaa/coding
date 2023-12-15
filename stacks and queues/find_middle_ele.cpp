#include <bits/stdc++.h>
using namespace std;

int arr[100];

int top=-1;

void pushin(int val){
        top++;
        arr[top]=val;
}

void popin(){
        if(top==-1){
                cout<<"cannot pop\n";
        }
        else{
                cout<<"popped : "<<arr[top]<<"\n";
                top--;
        }
}

void middle(){
        int middleele=(top/2);
        cout<<"middle : "<<arr[middleele]<<"\n";

}

void del_middle(){
        int middleele=(top/2);
        for(int i=middleele;i<top;i++){
                arr[i]=arr[i+1];
        }
        top--;
        cout<<"middle delted\n";
}

void display(){
        for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
        }
}

int main(){

        int no,val;
        cout<<"1) push";
        cout<<"2) pop";
        cout<<"3) findmiddle";
        cout<<"4) delmiddle";
        cout<<"5) showstack";
        cout<<"6) EXIT !!";

        do{
                cout<<"enter choice \n";
                cin>>no;

                switch(no){
                        case 1:
                        cout<<"enter value\n";
                        cin>>val;
                        pushin(val);
                        break;

                        case 2:
                        popin();
                        break;

                        case 3:
                        middle();
                        break;

                        case 4:
                        del_middle();
                        break;

                        case 5:
                        display();
                        break;

                        case 6:
                        break;;
                }
        }while(no!=6);
}