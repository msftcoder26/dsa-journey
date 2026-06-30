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

void printList(Node* head){

    Node* temp = head;

    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

Node* insertBeforeHead(Node* head, int val){

    Node* newNode = new Node(val);

    newNode->next = head;

    if(head != nullptr){
        head->prev = newNode;
    }
    head = newNode;
    return head;
}

int main(){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    Node* head = first;

    cout << "Before Insertion : ";
    printList(head);

    head = insertBeforeHead(head, 5);

    cout << "After Insertion : ";
    printList(head);

    return 0;
}