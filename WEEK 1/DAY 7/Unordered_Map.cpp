#include<bits/stdc++.h>
using namespace std;

int main() {

    unordered_map<int,int> mp;

    mp[1] = 10;
    mp[5] = 20;
    mp[3] = 30;

    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}