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

Node* insertAtIndex(Node* head, int index, int val){

    // Insert before head
    if(index == 0){

        Node* newNode = new Node(val);

        newNode->next = head;

        if(head != nullptr){
            head->prev = newNode;
        }
        return newNode;
    }

    Node* temp = head;

    while(temp != nullptr && index > 1){
        temp = temp->next;
        index--;
    }

    // Invalid index
    if(temp == nullptr){
        return head;
    }

    Node* newNode = new Node(val);

    newNode->next = temp->next;
    newNode->prev = temp;

    if(temp->next != nullptr){
        temp->next->prev = newNode;
    }
    temp->next = newNode;

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

    cout << "Before : ";
    printList(head);

    head = insertAtIndex(head, 2, 25);

    cout << "After : ";
    printList(head);

    return 0;
}