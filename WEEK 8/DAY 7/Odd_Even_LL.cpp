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

Node* oddEvenList(Node* head){

    if(head == nullptr || head->next == nullptr){
        return head;
    }

    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even;

    while(even != nullptr && even->next != nullptr){

        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;
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

    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    cout << "Original List: ";
    printList(first);

    first = oddEvenList(first);

    cout << "After Rearranging: ";
    printList(first);

    return 0;
}