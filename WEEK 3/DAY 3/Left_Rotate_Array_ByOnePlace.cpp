#include<bits/stdc++.h>
using namespace std;

vector<int> rotate(vector<int> &a, int n){

    int temp = a[0];

    for(int i=1; i<n; i++){

        a[i-1] = a[i];
    }

    a[n-1] = temp;

    return a;
}

int main(){

    int n;
    cin >> n;

    vector<int> a(n);

    for(int i=0; i<n; i++){

        cin >> a[i];
    }

    rotate(a,n);

    for(int i=0; i<n; i++){

        cout << a[i] << " ";
    }

    return 0;
}