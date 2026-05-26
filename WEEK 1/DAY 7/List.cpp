#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

   list<int> l;
    l.push_back(3); 
    l.push_back(5);
    l.push_back(7);

    for(auto it : l){
        cout << it << " ";
    }

    return 0;
}