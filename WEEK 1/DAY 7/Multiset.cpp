#include<bits/stdc++.h>
using namespace std;

int main() {

    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(3);
    ms.insert(2);

    for(auto it : ms){
        cout << it << " ";
    }

    return 0;
}