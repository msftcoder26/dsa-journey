#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        prev = nullptr;
        next = nullptr;
    }
};

void printForward(Node* head){

    Node* temp = head;

    cout << "Forward Traversal: ";

    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void printBackward(Node* tail){

    Node* temp = tail;

    cout << "Backward Traversal: ";

    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->prev;
    }

    cout << endl;
}

int main(){

    // Creating Nodes
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    // Linking Nodes
    first->next = second;

    second->prev = first;
    second->next = third;

    third->prev = second;

    Node* head = first;
    Node* tail = third;

    printForward(head);
    printBackward(tail);

    return 0;
}