#include<bits/stdc++.h>
using namespace std;

int main() {

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);

    q.back() += 5; 

    while(!q.empty()){

        cout << q.front() << " ";
        cout<<endl;

        cout << q.back() << " ";
        cout<<endl;

        q.pop();
        cout << q.front() << " ";
    }

    return 0;
}