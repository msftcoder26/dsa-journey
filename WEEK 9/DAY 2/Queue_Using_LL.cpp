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

class Queue{
private:
    Node* front;
    Node* rear;

public: 
    Queue(){
        front = nullptr;
        rear = nullptr;
    }

    // Enqueue
    void enqueue(int value){

        Node* newNode = new Node(value);

        // Queue Empty
        if(front == nullptr){
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    // Dequeue
    void dequeue(){
        if(front == nullptr){
            cout << "Queue Underflow\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        delete temp;

        if(front == nullptr){
            rear = nullptr;
        }
    }

    // Front Element
    int getFront(){
        if(front == nullptr){
            cout << "Queue is Empty\n";
            return -1;
        }
        return front->data;
    }

    // isEmpty
    bool isEmpty(){
        return front == nullptr;
    }

    // Print Queue
    void print(){
        if(front == nullptr){
            cout << "Queue is Empty\n";
            return;
        }

        Node* temp = front;
        cout << "Queue : ";

        while(temp != nullptr){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.print();

    cout << "Front = " << q.getFront() << endl;

    q.dequeue();

    q.print();

    cout << "Front = " << q.getFront() << endl;

    return 0;
}