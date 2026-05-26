#include<bits/stdc++.h>
using namespace std;

void print(int i, int n) {

    if(i > n)
        return;

    cout << "Vidisha" << endl;

    print(i + 1, n);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    print(1,n); //i=1

    return 0;
}