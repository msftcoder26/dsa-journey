#include<bits/stdc++.h>
using namespace std;

void print11(int n){
    int start=1;
    for(int i=0;i<n;i++){
       // decide starting number
        if(i%2==0){ //even
            start=1;
        } else{ //odd
            start=0;
        }

        //print no
        for(int j=0; j<i;j++){
            cout<<start<< " ";

            //flip b/w 1 and 0
            start=1-start;
        }
        cout<< endl;
    }
}

void print12(int n){
    for(int i=1;i<=n;i++){
        //number
        for(int j=1; j<=i; j++){
            cout<< j;
        }

        //space
        for(int j=1;j<= 2*(n-i) ;j++){
            cout<< " ";
        }

        //number
        //reverse
        for(int j=i; j>=1; j--){
            cout<< j;
        }
        cout<<endl;
    }
}

void print13(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< num << " ";
            num++;
        }
        cout<<endl;
    }
}

// void print14(int n){

//     char ch= 'A'; //globally declared
// Outside loop = value continues
// NOT reset. So each row restarts from A.

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<< ch << " ";
//             ch++;
//         }
//         cout<<endl;
//     }
// }
/*its op will be 
A
B C
D E F
G H I J*/

void print14(int n){

    for(int i=1; i<=n; i++){

        char ch = 'A'; //ch is created again for every row.
        //So every time outer loop runs: ch = A again.

        //Inside loop : Value resets every iteration
        for(int j=1; j<=i; j++){

            cout << ch<< " ";
            ch++;
        }

        cout << endl;
    }
}

void print15(int n){

    for(int i=1; i<=n; i++){

        char ch = 'A';

        for(int j=1; j<=n-i-1; j++){

            cout << ch << " ";
            //ch--; wrong
            ch++;
        }

        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; 
    cin>>n;

    print11(n);
    print12(n);
    print13(n);
    print14(n);
    print15(n);
    return 0;
}    