#include<bits/stdc++.h>
using namespace std;

int findmax(int a[], int n){

    int maxi = 0;

    int cnt = 0;

    for(int i=0; i<n; i++){

        if(a[i] == 1){

            cnt++;

            maxi = max(maxi, cnt);
        }

        else{

            cnt = 0;
        }
    }

    return maxi;
}

int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++){

        cin >> a[i];
    }

    cout << findmax(a,n);

    return 0;
}