#include<bits/stdc++.h>
using namespace std;

void insertion(int a[], int n){
    for(int i=0;i<=n-1;i++){
        int j=i;

        while(j>0 && a[j-1]>a[j]){
            //swap
            int temp = a[j-1];
            a[j-1] = a[j];
            a[j] = temp;

            //move right
            j--;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n;i++){
        cin >>a[i];
    }

    insertion(a,n);

    for(int i=0;i<n;i++){
        cout<< a[i] << " ";
    }

    return 0;
}