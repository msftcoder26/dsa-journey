#include<bits/stdc++.h>
using namespace std;

int largest(int a[], int n){
    int largest=a[0];

    for(int i=0;i<n;i++){
        if (a[i]>largest){
            largest=a[i];
        }
    }

    return largest;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<largest(a,n);

    return 0;
}