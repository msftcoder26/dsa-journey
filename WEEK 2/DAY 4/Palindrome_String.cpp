#include<bits/stdc++.h>
using namespace std;

bool f(int i, string &s){
    if(i>s.size()/2) return true;

    if(s[i] != s[s.size()-i-1]) return false;

    return f(i+1, s);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin>>s;

    if(f(0,s)){
        cout<<"Palindrome";
    } else{
        cout<< "Not Palindrome";
    }

    return 0;
}