#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element at the bottom of a stack
void insertAtBottom(stack<int>& s, int value) {
    if (s.empty()) {
        s.push(value);
        return;
    }

    int temp = s.top();
    s.pop();
    insertAtBottom(s, value);
    s.push(temp);
}

// Function to reverse a stack using recursion
void reverseStack(stack<int>& s) {
    if (!s.empty()) {
        int temp = s.top();
        s.pop();
        reverseStack(s);
        insertAtBottom(s, temp);
    }
}

int main() {
    stack<int> myStack;

    // Push elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);

    // Reverse the stack
    reverseStack(myStack);

    cout << "\nReversed Stack: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }

    return 0;
}
