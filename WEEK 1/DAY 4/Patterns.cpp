#include<bits/stdc++.h>
using namespace std;

void print6(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<n-i+1;j++){
            cout << j << " ";
        }
        cout<<endl;
    }
}

void print7(int n){ 
    for(int i=0;i<n;i++){

        //space
        for(int j=0;j<n-i-1;j++){
            cout << " " ;
        }
        //star
        for(int j=0; j<2*i+1; j++){
            cout<< "*";
        }

        //space
         for(int j=0;j<n-i-1;j++){
            cout << " " ;
        }

        cout<< endl;
    }    
    
}

void print8(int n){
    for(int i=0;i<n;i++){

        //space
        for(int j=0;j<=i;j++){
            cout << " " ;
        }
        //star
        for(int j=0; j< 2*n-(2*i+1); j++){
            cout<< "*";
        }

        //space
         for(int j=0;j<=i  ;j++){
            cout << " " ;
        }

        cout<< endl;
    }    
    
}

void print9(int n){
    for(int i=1;i<=2*n-1;i++){  // yahan sirf i<n isliye nhi likha coz isme incresing +decreasing pattern dono print karne hai 
        //agar i<n hota toh decreasing part kabhi print hi nhi hota
        int star=i;
        if(i>n){
            star=2*n-i;
        }
        for(int j=1;j<=star;j++){
            cout << "* ";
        }
        cout<<endl;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    print6(n);
    print7(n);
    print8(n);
    print9(n);

    return 0;
}