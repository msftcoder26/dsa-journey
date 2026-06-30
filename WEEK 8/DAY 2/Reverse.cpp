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

Node* reverseDLL(Node* head){

    if(head == nullptr || head->next == nullptr){
        return head;
    }

    Node* current = head;
    Node* temp = nullptr;

    while(current != nullptr){

        // Swap prev and next
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        // Move to next node
        current = current->prev;
    }

    head = temp->prev;

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

    cout << "Original DLL : ";
    printList(head);

    head = reverseDLL(head);

    cout << "Reversed DLL : ";
    printList(head);

    return 0;
}