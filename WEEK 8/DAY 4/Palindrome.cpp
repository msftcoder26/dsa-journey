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

Node* reverse(Node* head){

    Node* prev = nullptr;
    Node* curr = head;

    while(curr != nullptr){

        Node* front = curr->next;

        curr->next = prev;

        prev = curr;

        curr = front;
    }

    return prev;
}

bool isPalindrome(Node* head){

    if(head == nullptr || head->next == nullptr){
        return true;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast->next != nullptr && fast->next->next != nullptr){

        slow = slow->next;
        fast = fast->next->next;
    }

    Node* secondHalf = reverse(slow->next);

    Node* firstHalf = head;

    while(secondHalf != nullptr){

        if(firstHalf->data != secondHalf->data){
            return false;
        }

        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    return true;
}

int main(){

    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(1);

    first->next = second;
    second->next = third;
    third->next = fourth;

    if(isPalindrome(first))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
}