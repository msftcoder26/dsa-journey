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

bool search(Node* head, int key){

    Node* temp = head;

    while(temp != nullptr){

        if(temp->data == key){
            return true;
        }

        temp = temp->next;
    }

    return false;
}

void printList(Node* head){

    Node* temp = head;

    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main(){

    // Creating Nodes
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    // Linking Nodes
    first->next = second;
    second->next = third;
    third->next = fourth;

    Node* head = first;

    printList(head);

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    if(search(head, key)){
        cout << "Element Found";
    }
    else{
        cout << "Element Not Found";
    }

    return 0;
}