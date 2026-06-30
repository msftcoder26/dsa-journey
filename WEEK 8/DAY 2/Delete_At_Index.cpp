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

Node* deleteAtIndex(Node* head, int index){

    if(head == nullptr){
        return head;
    }

    // Delete Head
    if(index == 0){

        Node* temp = head;

        head = head->next;

        if(head != nullptr){
            head->prev = nullptr;
        }

        delete temp;

        return head;
    }

    Node* temp = head;

    while(temp != nullptr && index > 0){
        temp = temp->next;
        index--;
    }

    // Invalid index
    if(temp == nullptr){
        return head;
    }

    if(temp->prev != nullptr){
        temp->prev->next = temp->next;
    }

    if(temp->next != nullptr){
        temp->next->prev = temp->prev;
    }

    delete temp;

    return head;
}

int main(){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    Node* head = first;

    cout << "Before : ";
    printList(head);

    head = deleteAtIndex(head, 2);

    cout << "After : ";
    printList(head);

    return 0;
}