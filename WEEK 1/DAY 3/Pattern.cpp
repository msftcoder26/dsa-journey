#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "* ";
        }
        cout<<endl;
    }
}
 
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout<<endl;
    }
}

void print3(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout << j <<" ";
        }
        cout<<endl;
    }
}

void print4(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout << i<< " ";
        }
        cout<<endl;
    }
}

void print5 (int n){
    for(int i=1;i<n;i++){
        for(int j=1;j< n-i+1 ;j++){
            cout << "*  ";
        }
        cout<<endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
     
    print1(n);
    print2(n); 
    print3(n);
    print4(n);
    print5(n);

    return 0;
}
