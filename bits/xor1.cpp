#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=1,b=2;
    a=a^b;
    b=b^a;
    a=a^b;
    cout<<a<<" "<<b;
return 0;
}
