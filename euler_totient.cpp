#include <bits/stdc++.h>
using namespace std;

// !eulers totient gives nos bw 1 to n who gcd is equal to 1

// ! phi(prime)=prime-1

// todo : phi(p^x)= p^x-no of integers not coprime with p where p is a prime no and x is non negative integer  
// todo :  phi(p^x)=(p^(x-1)*(p-1))

int gcd(int i,int n){
    
    if(n==0){
        return i;
    }
    return gcd(n,i%n);
}

int main()
{
    int n;cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){       //time compllexity = O(nlog(n))
        if(gcd(i,n)==1){
            count++;
        }
    }

    cout<<"phi("<<n<<") = "<<count<<endl;
    
return 0;
}
