
#include <bits/stdc++.h>
using namespace std;

int valid(string s)
{
        stack<char> st;
        int counter = 0;
        for (int i = 0; i < s.length(); i++)
        {
                if (st.empty())
                {
                        st.push(s[i]);
                }
                else if(st.top()=='(' && s[i]==')'){
                        counter=counter+2;
                        st.pop();
                }
                else{
                        st.push(s[i]);
                }
        }
        return counter;
}

        int main()
        {
                string s;
                cin >> s;
                cout << valid(s);
        }