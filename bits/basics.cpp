#include <bits/stdc++.h>
using namespace std;

void printbin(int n){
    for(int i=10;i>=0;i--){
        cout<<((n>>i)&1);         //! print binary
    }
    cout<<endl;
}

int main()
{
int n;cin>>n;
printbin(n);
// int i=0;
// if((n&(1<<i))==0){
//     cout<<"unset\n";
// }                          //! check set and unset
// else{
//     cout<<"set\n";
// }

    // int i=2;
    // cout<<(n|(1<<i))<<endl;        //! set ith bit

    // int i=3;
    // cout<<(n& ~(1<<i));              //! unset ith bit

    // int i=2;
    // printbin(n^(1<<i));               //! toogle ith bit
    // cout<<endl;

    // int count=0;
    // for(int i=31;i>=0;i--){
    //     if((n>>i)&1){
    //         count++;               //! count no of set bits
    //     }
    // }

    // cout<<count<<endl;

return 0;
}