#include <iostream>
#include <queue>
using namespace std;

class Stack {
private:
    queue<int> q;

public:

    void push(int x) {

        q.push(x);

        int n = q.size();

        for(int i = 0; i < n - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {

        if(q.empty()) {
            cout << "Stack Underflow\n";
            return;
        }
        q.pop();
    }

    int top() {

        if(q.empty()) {
            cout << "Stack Empty\n";
            return -1;
        }
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

int main() {

    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;

    st.pop();

    cout << st.top() << endl;
}