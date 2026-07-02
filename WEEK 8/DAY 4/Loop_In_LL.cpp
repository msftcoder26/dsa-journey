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

bool detectLoop(Node* head){

    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast->next != nullptr){

        slow = slow->next;

        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }

    return false;
}

int main(){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    first->next = second;
    second->next = third;
    third->next = fourth;

    // Create cycle
    fourth->next = second;

    if(detectLoop(first))
        cout << "Cycle Present";
    else
        cout << "No Cycle";
}