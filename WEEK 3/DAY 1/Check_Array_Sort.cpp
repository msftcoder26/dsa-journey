#include<bits/stdc++.h>
using namespace std;

bool isSorted(int n, vector<int> a){

    for(int i=1; i<n; i++){

        if(a[i] >= a[i-1]){

        }

        else{

            return false;
        }
    }

    return true;
}

int main(){

    int n;
    cin >> n;

    vector<int> a(n);

    for(int i=0; i<n; i++){

        cin >> a[i];
    }

    cout << isSorted(n,a);

    return 0;
}