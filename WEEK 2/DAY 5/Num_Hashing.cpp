#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //generic hashing
    int hash[100000]={0}; //Numbers from 0 to 99999 safely store ho sakte hain.

    //precompute
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int query;
    cin>>query;

    while(query--){
        int num;
        cin>>num;

        cout<<hash[num]<<endl;
    }

    return 0;
}