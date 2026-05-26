#include<bits/stdc++.h>
using namespace std;

void printDivisor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout << i<< " ";
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

      int n;
      cin>>n;

      printDivisor(n);

    return 0;
}