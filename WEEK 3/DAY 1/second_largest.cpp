#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &a, int n){

    int largest = a[0];
    int slargest = -1;

    for(int i=0; i<n; i++){

        if(a[i] > largest){

            slargest = largest;
            largest = a[i];
        }

        else if(a[i] < largest && a[i] > slargest){

            slargest = a[i];
        }
    }

    return slargest;
}

int secondSmallest(vector<int> &a, int n){

    int smallest = a[0];
    int ssmallest = INT_MAX;

    for(int i=0; i<n; i++){

        if(a[i] < smallest){

            ssmallest = smallest;
            smallest = a[i];
        }

        else if(a[i] != smallest && a[i] < ssmallest){

            ssmallest = a[i];
        }
    }

    return ssmallest;
}

int main(){

    int n;
    cin >> n;

    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int slarge = secondLargest(a,n);

    int ssmall = secondSmallest(a,n);

    cout << "Second Largest = " << slarge << endl;

    cout << "Second Smallest = " << ssmall;

    return 0;
}