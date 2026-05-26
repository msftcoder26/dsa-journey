#include<bits/stdc++.h>
using namespace std;

void rev(int n){

    int revN=0;
    while(n>0){
        int lastdigit = n%10;
        n=n/10;

        revN= (revN*10) + lastdigit;
    }

    cout<< revN;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    rev(n);
    
    return 0;
}