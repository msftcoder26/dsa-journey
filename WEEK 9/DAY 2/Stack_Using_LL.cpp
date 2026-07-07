#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class Stack{
private:
    Node* top;

public:
    Stack(){
        top = nullptr;
    }

    // Push
    void push(int value){
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    // Pop
    void pop(){
        if(top == nullptr){
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    // Peek
    int peek(){
        if(top == nullptr){
            cout << "Stack is Empty\n";
            return -1;
        }
        return top->data;
    }

    // isEmpty
    bool isEmpty(){
        return top == nullptr;
    }

    // Print
    void print(){
        if(top == nullptr){
            cout << "Stack is Empty\n";
            return;
        }

        Node* temp = top;

        cout << "Stack : ";

        while(temp != nullptr){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){

    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    st.print();

    cout << "Top = " << st.peek() << endl;

    st.pop();

    st.print();

    cout << "Top = " << st.peek() << endl;

    return 0;
}