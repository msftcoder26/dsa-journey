#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int size;

public:
    Stack(int s) {
        size = s;
        arr = new int[size];
        top = -1;
    }

    // Push
    void push(int value) {

        if(top == size - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        top++;
        arr[top] = value;
    }

    // Pop
    void pop() {

        if(top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    // Peek
    int peek() {

        if(top == -1) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }

    // isEmpty
    bool isEmpty() {
        return top == -1;
    }

    // Size
    int getSize() {
        return top + 1;
    }
    
    // Print Stack
    void print() {
        if(top == -1) {
            cout << "Stack is Empty\n";
            return;
        }
        cout << "Stack: ";

        for(int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    Stack st(5);

    st.push(10);
    st.push(20);
    st.push(30);

    st.print();

    cout << "Top Element: " << st.peek() << endl;

    st.pop();

    st.print();

    cout << "Current Size: " << st.getSize() << endl;

    cout << "Is Empty? ";

    if(st.isEmpty())
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}