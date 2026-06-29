#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

int lengthOfLL(Node* head) {
    Node* temp = head;
    int count = 0;

    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }

    return count;
}

int main() {
    // Creating Linked List: 10 -> 20 -> 30 -> 40

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Length of Linked List = " << lengthOfLL(head);

    return 0;
}