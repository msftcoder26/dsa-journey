#include<bits/stdc++.h>
using namespace std;

//parameterized
void sum(int i, int s){

    if(i < 1){
        cout << s;
        return;
    }

    sum(i - 1, s + i);
}

int main(){

    int n;
    cin >> n;

    sum(n, 0);

    return 0;
}

/* Functional
#include<bits/stdc++.h>
using namespace std;

int sum(int n){

    if(n == 0)
        return 0;

    return n + sum(n - 1);
}

int main(){

    int n;
    cin >> n;

    cout << sum(n);

    return 0;
}*/