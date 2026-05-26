#include<bits/stdc++.h>
using namespace std;

//pass by value
// void name(string s){
//     s[0]='J';
//     cout<<s<<endl;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     string s= "Riya";
//     name(s);
//     cout<<s<<endl;

//     return 0;
// }

//pass by ref
void name(string &s){
    s[0]='J';
    cout<<s<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s= "Riya";
    name(s);
    cout<<s<<endl;

    return 0;
}