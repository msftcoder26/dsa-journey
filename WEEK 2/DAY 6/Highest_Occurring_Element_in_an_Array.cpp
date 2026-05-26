#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int hash[100] = {0};

    // hashing
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    int maxi = 0;
    int element = -1;

    // find maximum frequency
    for(int i=0; i<100; i++){

        if(hash[i] > maxi){

            maxi = hash[i];
            element = i;
        }
    }

    cout << element;

    return 0;
}
