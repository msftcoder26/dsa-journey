#include<bits/stdc++.h>
using namespace std;

int main() {

    priority_queue<int> pq;

    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    pq.push(1);

    while(!pq.empty()){

        cout << pq.top() << " ";

        pq.pop();
    }

    cout<< endl;
    cout << pq.top();

    return 0;
}