#include<bits/stdc++.h>
using namespace std;

void printname(string name){ //take value and can print any name
    cout << "hey " << name<< endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string name;
    cin>>name;
    printname(name);

    string name2;
    cin>>name2;
    printname(name2);

    return 0;
}