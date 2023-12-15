#include <bits/stdc++.h>
using namespace std;

//todo (n>>1) -> no divided by 2
//todo (n<<1) -> no multiplied by 2

void printbin(int n){
    for(int i=10;i>=0;i--){
        cout<<((n>>i)&1);
    }
    cout<<endl;
}

int main()
{
    int n;cin>>n;
    printbin(n);

    //! odd and even check

    // if(n&1) cout<< "odd\n";
    // else cout<< "even\n";

    //! multiply and divide by 2

    // cout<<"MUltiply by2 is "<<(n<<1)<<endl;
    // cout<<" divide by 2 is "<<(n>>1)<<endl;

    //! upper case and lower case

    // char ch;cin>>ch;

    //! upper-> lower (5th bit set)

    // cout<<char(ch | (1<<5))<<endl;

    //! lowet-> upper (5th bit unset)

    // cout<<char(ch & ~(1<<5))<<endl;

    //! clear lsb           all zeros from right to left till specified bit

    // int i=4;
    // printbin(n & ~((1<<(i+1))-1));

    //! clear msb             all zeros from left to right till specified bit

    // int i=3;
    // printbin(n & (1<<(i+1))-1);

    //! power of 2

    // if(n & (n-1)) cout<<"no power of 2";
    // else cout<< "power of 2";

    //! pos to neg

    // cout<<(~n+1);

    //! no of bits to change a to b

    int b;
    cin>>b;

    int no = (n^b);
    int count=0;

    for(int i=10;i>=0;i--){
        if((no<<i)&1) count++;
    }

    cout<<count<<endl;

return 0;
}
