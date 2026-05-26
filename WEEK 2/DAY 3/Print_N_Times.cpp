#include<bits/stdc++.h>
using namespace std;

int cnt=0;
void printN(){
    if (cnt==5) return;
    cout<<cnt<<endl;
    cnt++;
    printN();
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    printN();

    return 0;
}