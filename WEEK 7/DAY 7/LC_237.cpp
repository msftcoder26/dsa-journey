#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

void printList(Node* head) {

    Node* temp = head;

    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(Node* node){

    node->data = node->next->data;
    Node* temp = node->next;
    node->next = node->next->next;

    delete temp;
}

int main(){

    Node* first = new Node(4);
    Node* second = new Node(5);
    Node* third = new Node(1);
    Node* fourth = new Node(9);

    first->next = second;
    second->next = third;
    third->next = fourth;

    cout << "Before Deletion : ";
    printList(first);

    deleteNode(second);

    cout << "After Deletion : ";
    printList(first);

    return 0;
}