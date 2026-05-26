#include<bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int dup = n;
    int sum = 0;

    while(n > 0) {
        int ld = n % 10; //ld=lastdigit 
        sum = sum + (ld * ld * ld);
        n = n / 10;
    }

    if(sum == dup){
        cout << "true";
    }else{
        cout << "false";
    }
    
    return 0;
}
