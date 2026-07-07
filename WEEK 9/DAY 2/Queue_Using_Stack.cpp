#include <iostream>
#include <stack>
using namespace std;

class Queue {
private:
    stack<int> s1;
    stack<int> s2;

public:
    void enqueue(int x) {
        s1.push(x);
    }

    void dequeue() {

        if(s1.empty() && s2.empty()) {
            cout << "Queue Underflow\n";
            return;
        }

        if(s2.empty()) {
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        s2.pop();
    }

    int front() {

        if(s1.empty() && s2.empty()) {
            cout << "Queue Empty\n";
            return -1;
        }

        if(s2.empty()) {
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.front() << endl;

    q.dequeue();

    cout << q.front() << endl;
}