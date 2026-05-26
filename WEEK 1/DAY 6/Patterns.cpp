#include<bits/stdc++.h>
using namespace std;

void print16(int n){
    for (int i=1;i<=n;i++){

        char ch ='A' + i -1;

        for(int j =1;j<=i;j++){
            cout<<ch;
            //ch++;
        }
        cout << endl;
    }
}

void print17(int n){

    for(int i=0; i<n; i++){

        // spaces
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }

        char ch = 'A';
        int breakpoint = (2*i+1)/2;

        /*Mid tak characters increase honge
        Mid ke baad decrease honge*/
        // characters
        for(int j=0; j<2*i+1; j++){

            cout << ch;

            if(j < breakpoint){
                ch++;
            }
            else{
                ch--;
            }
        }

        // spaces
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }

        cout << endl;
    }
}

void print18(int n){
    for(int i=1; i<=n; i++){

        char ch = 'A' + (n-i);

        for(int j=1; j<=i; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

void print19(int n){

    // upper half
    for(int i=1; i<=n; i++){

        // left stars
        for(int j=1; j<=n-i+1; j++){
            cout << "* ";
        }

        // middle spaces
        for(int j=1; j<=2*(i-1); j++){
            cout << "  ";
        }

        // right stars
        for(int j=1; j<=n-i+1; j++){
            cout << "* ";
        }

        cout << endl;
    }

    // lower half
    for(int i=2; i<=n; i++){

        // left stars
        for(int j=1; j<=i; j++){
            cout << "* ";
        }

        // middle spaces
        for(int j=1; j<=2*(n-i); j++){
            cout << "  ";
        }

        // right stars
        for(int j=1; j<=i; j++){
            cout << "* ";
        }

        cout << endl;
    }
}

void print20(int n){

    // upper half
    for(int i=1; i<=n; i++){

        // left stars
        for(int j=1; j<=i; j++){
            cout << "* ";
        }

        // spaces
        for(int j=1; j<=2*(n-i); j++){
            cout << "  ";
        }

        // right stars
        for(int j=1; j<=i; j++){
            cout << "* ";
        }

        cout << endl;
    }

    // lower half
    for(int i=n-1; i>=1; i--){

        // left stars
        for(int j=1; j<=i; j++){
            cout << "* ";
        }

        // spaces
        for(int j=1; j<=2*(n-i); j++){
            cout << "  ";
        }

        // right stars
        for(int j=1; j<=i; j++){
            cout << "* ";
        }

        cout << endl;
    }
}

void print21(int n){

    for(int i=1; i<=n; i++){

        for(int j=1; j<=n; j++){

            if(i==1 || i==n || j==1 || j==n){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }

        cout << endl;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    print16(n);
    print17(n);
    print18(n);
    print19(n);
    print20(n);
    print21(n);

    return 0;
}
