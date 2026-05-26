#include<bits/stdc++.h>
using namespace std;

int main() {

    multimap<int,int> mp;

    mp.insert({1,10});
    mp.insert({1,20});
    mp.insert({2,30});

    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}