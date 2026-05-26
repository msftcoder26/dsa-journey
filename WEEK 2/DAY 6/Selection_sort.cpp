#include<bits/stdc++.h>
using namespace std;

void selection(int arr[], int n){
    for(int i=0;i<n;i++){
        int min=i;

        // find minimum element
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }

        // swap smallest with current position
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

     int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    selection(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }


    return 0;
}