#include<bits/stdc++.h>
using namespace std;

int linear(int a[], int n, int num){
    for(int i=0;i<n;i++){
        if(a[i]==num){
            return i;
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    int num;
    cin>>num;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans = linear(a,n,num);

    cout << ans;


    return 0;
}