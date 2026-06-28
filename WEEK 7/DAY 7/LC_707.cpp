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

class MyLinkedList{

public:

    Node* head;

    MyLinkedList(){
        head = nullptr;
    }

    //get value index
    int get(int index){

        Node* temp = head;

        while(temp != nullptr && index > 0){
            temp = temp->next;
            index--;
        }

        if(temp == nullptr){
            return -1;
        }
        return temp->data;
    }

    //at head
    void addAtHead(int val){

        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    //at tail
    void addAtTail(int val){

        Node* newNode = new Node(val);

        if(head == nullptr){
            head = newNode;
            return;
        }

        Node* temp = head;

        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }

    //at index
    void addAtIndex(int index, int val){

        if(index == 0){
            addAtHead(val);
            return;
        }

        Node* temp = head;

        while(temp != nullptr && index > 1){
            temp = temp->next;
            index--;
        }

        if(temp == nullptr){
            return;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    //delete at index
    void deleteAtIndex(int index){

        if(head == nullptr){
            return;
        }

        if(index == 0){
            Node* temp = head;
            head = head->next;

            delete temp;
            return;
        }
        Node* temp = head;

        while(temp->next != nullptr && index > 1){
            temp = temp->next;
            index--;
        }

        if(temp->next == nullptr){
            return;
        }

        Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }

    void printList(){

        Node* temp = head;

        while(temp != nullptr){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){

    MyLinkedList list;

    list.addAtHead(10);
    list.addAtHead(20);
    list.addAtTail(30);
    list.addAtTail(40);

    cout << "Linked List : ";
    list.printList();

    cout << "Element at index 2 : ";
    cout << list.get(2) << endl;

    list.addAtIndex(2,25);

    cout << "After insertion : ";
    list.printList();

    list.deleteAtIndex(3);

    cout << "After deletion : ";
    list.printList();

    return 0;
}