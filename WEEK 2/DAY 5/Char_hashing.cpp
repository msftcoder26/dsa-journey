#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin>>s;

    //generic hashing
    int hash[256]={0};

    for(int i=0; i<s.size(); i++){
        hash[s[i]]++;
    }

    int query;
    cin>>query;

    while(query--){
        char ch;
        cin>>ch;

        cout<<hash[ch]<<endl;
    }

    return 0;
}