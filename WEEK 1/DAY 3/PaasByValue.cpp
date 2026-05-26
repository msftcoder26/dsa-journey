#include<bits/stdc++.h>
using namespace std;

void sum(int n){ //4
    
    cout<<n<<endl; //5

    n+=5; //6
    cout<<n<<endl;  //7

    n+=10; //8
    cout<<n<<endl; //9
}

int main() { //1
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n=5;  //2
    sum(n);  //3

    cout<<n<<endl; //10  //original value is not changing 

    return 0; //11
} 