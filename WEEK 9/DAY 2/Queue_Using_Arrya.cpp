#include <iostream>
using namespace std;

class Queue {

private:
    int *arr;
    int front;
    int rear;
    int size;

public:

    Queue(int s) {
        size = s;
        arr = new int[size];

        front = 0;
        rear = -1;  
    }

    // Enqueue
    void enqueue(int value) {

        if(rear == size - 1) {
            cout << "Queue Overflow\n";
            return;
        }
        rear++;
        arr[rear] = value;
    }

    // Dequeue
    void dequeue() {

        if(front > rear) {
            cout << "Queue Underflow\n";
            return;
        }
        front++;
    }

    // Front Element
    int getFront() {

        if(front > rear) {
            cout << "Queue is Empty\n";
            return -1;
        }
        return arr[front];
    }

    // isEmpty
    bool isEmpty() {
        return front > rear;
    }

    // isFull
    bool isFull() {
        return rear == size - 1;
    }

    // Size
    int getSize() {
        return rear - front + 1;
    }

    // Print Queue
    void print() {

        if(isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Queue: ";

        for(int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.print();

    cout << "Front = " << q.getFront() << endl;

    q.dequeue();

    q.print();

    cout << "Size = " << q.getSize() << endl;

    cout << "Is Empty? ";

    if(q.isEmpty())
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}