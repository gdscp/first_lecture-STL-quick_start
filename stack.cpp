#include <iostream>
#include <stack>
using namespace std;

void printstack(stack<int>stack){
    while (!stack.empty()) {
        cout << stack.top() <<" ";
        stack.pop();
    }cout<<endl;
}

int main() {
    // stack<data_type> name;
    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
    int num=0;
    stack.push(num);
    printstack(stack);
    stack.pop();
    stack.pop();
    stack.pop();
    printstack(stack);
}
