#include<bits/stdc++.h>
using namespace std;

int main() {

    deque<int> dq;

    dq.push_back(1);
    dq.emplace_back(4);
    dq.push_back(2);
    dq.push_front(0);
    dq.emplace_front(5);
    
    dq.pop_back();
    dq.pop_front();

    for(auto it : dq){
        cout << it << " ";
    }

    return 0;
}