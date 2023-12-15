#include <bits/stdc++.h>
using namespace std;

int evaluation(string s)
{
    stack<int> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            st.push(s[i] - '0'); // Convert character to integer
        }
        else
        {
            int x, y;
            switch (s[i])
            {
            case '+':
                x = st.top();
                st.pop();
                y = st.top();
                st.pop();
                st.push(y + x);
                break;
            case '-':
                x = st.top();
                st.pop();
                y = st.top();
                st.pop();
                st.push(y - x);
                break;
            case '/':
                x = st.top();
                st.pop();
                y = st.top();
                st.pop();
                st.push(y / x);
                break;
            case '*':
                x = st.top();
                st.pop();
                y = st.top();
                st.pop();
                st.push(y * x);
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    string s = "123+*8-";
    cout << evaluation(s);
}
