#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int value) {
    if (s.empty()) {
        s.push(value);
        return;
    }

    int temp = s.top();
    s.pop();
    insertAtBottom(s, value);
    s.push(temp);
}

int main() {
    stack<int> myStack;
    
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    insertAtBottom(myStack, 4);

    cout << "\nStack after inserting at the end: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }

    return 0;
}
