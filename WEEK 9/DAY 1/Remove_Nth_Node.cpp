#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = nullptr;
    }
};

Node* removeNthFromEnd(Node* head, int n){

    Node* dummy = new Node(0);
    dummy->next = head;

    Node* slow = dummy;
    Node* fast = dummy;

    // Move fast n+1 steps
    for(int i = 0; i <= n; i++){
        fast = fast->next;
    }

    while(fast != nullptr){

        slow = slow->next;
        fast = fast->next;
    }

    Node* deleteNode = slow->next;
    slow->next = deleteNode->next;
    delete deleteNode;

    return dummy->next;
}

void printList(Node* head){

    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){

    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node* head = first;

    head = removeNthFromEnd(head,2);

    printList(head);

    return 0;
}