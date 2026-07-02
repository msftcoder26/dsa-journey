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

Node* startingPoint(Node* head){

    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast->next != nullptr){

        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){

            slow = head;

            while(slow != fast){

                slow = slow->next;
                fast = fast->next;
            }

            return slow;
        }
    }

    return nullptr;
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

    // Create cycle
    fifth->next = third;

    Node* ans = startingPoint(first);

    if(ans != nullptr)
        cout << "Cycle starts at : " << ans->data;
    else
        cout << "No Cycle";
}