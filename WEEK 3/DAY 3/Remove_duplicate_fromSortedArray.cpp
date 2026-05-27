#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n){

    int i = 0;

    for(int j=1; j<n; j++){

        if(arr[j] != arr[i]){

            i++;

            arr[i] = arr[j];
        }
    }

    return i+1;
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){

        cin >> arr[i];
    }

    int k = removeDuplicates(arr,n);

    cout << k << endl;

    for(int i=0; i<k; i++){

        cout << arr[i] << " ";
    }

    return 0;
}