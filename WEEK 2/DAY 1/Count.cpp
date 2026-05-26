//Count all Digits of a Number

#include<bits/stdc++.h>
using namespace std;

void countDigit(int n){

    int cnt=0;
    while(n>0){
        int lastdigit = n%10;
        cnt++;
        n=n/10;
    }

    cout<< cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    //countDigit(n);
    /*yahan function me sirf call karne se value print nhi hogi unlike pattern problem
    qki pattern problem me hum function me hi cout<< "*" kar dete the 
    but yahan hum reutn cnt kar rahe hai
    toh returned value ko print karne ke liye hum cout << countDigit(n); karenge
    ya nhi toh function me return ke jagah hum void use kar le aur cout kar de*/
   
    countDigit(n);
    return 0;
}


