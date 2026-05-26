#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    int revN=0;
    int dup = n; //Because later hum n ko change kar denge while loop me.

    while(n>0){
        int lastdigit = n%10;
        revN = (revN*10) + lastdigit;
        n=n/10; //Last digit remove karna
    }

    if(dup==revN){
        cout<< "true";
    } else {
        cout<< "false";
    }
    

    return 0;
}