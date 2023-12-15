#include <bits/stdc++.h>
using namespace std;

stack<int> min_stack;
stack<int> st;

int min(int arr[], int n)
{

        for (int i = 0; i < n; i++)
        {
                st.push(arr[i]);

                if (min_stack.empty())
                {
                        min_stack.push(arr[i]);
                }
                else
                {
                        if (arr[i] < min_stack.top())
                        {
                                min_stack.push(arr[i]);
                        }
                }
        }

        return min_stack.top();
}

int main()
{
        int n = 5;
        int arr[n] = {18, 19, 29, 15, 16};

        cout<<min(arr,n);
        
}