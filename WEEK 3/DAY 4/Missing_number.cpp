#include<bits/stdc++.h>
using namespace std;

//brute force
int missingNumber(int arr[], int n){

    for(int i=1; i<=n; i++){

        bool found = false;

        for(int j=0; j<n-1; j++){

            if(arr[j] == i){

                found = true;
                break;
            }
        }

        if(found == false){

            return i;
        }
    }

    return -1;
}

//better
int missingNumber(int arr[], int n){

    int hash[n+1] = {0};
    
    /*Question bolta hai: numbers from 1 to N
    but: one number missing
    So total elements become: N-1*/

    for(int i=0; i<n-1; i++){

        hash[arr[i]] = 1;
    }

    for(int i=1; i<=n; i++){

        if(hash[i] == 0){

            return i;
        }
    }

    return -1;
}

//optimal
int missingNumber(int arr[], int n){

    int sum = (n * (n+1)) / 2;

    int s2 = 0;

    for(int i=0; i<n-1; i++){

        s2 += arr[i];
    }

    return sum - s2;
}

int main(){

    int n;
    cin >> n;

    int arr[n-1];

    for(int i=0; i<n-1; i++){

        cin >> arr[i];
    }

    cout << missingNumber(arr,n);

    return 0;
}