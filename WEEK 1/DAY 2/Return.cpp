#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b){
    int c= a+b;
    return c;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b;
    cin>>a>>b;

    cout<<"value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;

    int res = sum(a,b);
    cout<<"sum: " << res; 
    return 0;
}