#include<bits/stdc++.h>
using namespace std;

int main() {

    map<int,int> mp;

    mp[1] = 10;
    mp[5] = 20;
    mp[3] = 30;

   // map me duplicate keys allowed nahi hote.
    // mp.emplace(3,1);
    // mp.insert({5,4});

    mp.emplace(6,1);
    mp.insert({7,4});

    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}