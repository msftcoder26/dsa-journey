#include<bits/stdc++.h>
using namespace std;

//brute
int singleNumber(int arr[], int n){

    for(int i=0; i<n; i++){

        int cnt = 0;

        for(int j=0; j<n; j++){

            if(arr[i] == arr[j]){

                cnt++;
            }
        }

        if(cnt == 1){

            return arr[i];
        }
    }

    return -1;
}

//better
int singleNumber(int arr[], int n){

    map<int,int> mpp;

    for(int i=0; i<n; i++){

        mpp[arr[i]]++;
    }

    for(auto it : mpp){

        if(it.second == 1){

            return it.first;
        }
    }

    return -1;
}

//optimal
int singleNumber(int arr[], int n){

    int xorr = 0;

    for(int i=0; i<n; i++){

        xorr = xorr ^ arr[i];
    }

    return xorr;
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){

        cin >> arr[i];
    }

    cout << singleNumber(arr,n);

    return 0;
}