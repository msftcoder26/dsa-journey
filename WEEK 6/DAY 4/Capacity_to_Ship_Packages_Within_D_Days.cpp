#include<bits/stdc++.h>
using namespace std;

// Agar ship capacity = capacity ho,
// to total kitne din lagenge?

int findDays(vector<int>& weights, int capacity){

    int days = 1;
    int load = 0;

    for(int i = 0; i < weights.size(); i++){

        if(load + weights[i] > capacity){
            days++;
            load = weights[i];
        }
        else{
            load += weights[i];
        }
    }
    return days;
}

int shipWithinDays(vector<int>& weights, int d){

    int low = *max_element(weights.begin(), weights.end());

    int high = accumulate(weights.begin(), weights.end(), 0);

    while(low <= high){

        int mid = (low+high)/2;

        int requiredDays = findDays(weights, mid);

        if(requiredDays <= d){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}

int main(){

    int n;
    cin >> n;

    vector<int> weights(n);

    for(int i = 0; i < n; i++){
        cin >> weights[i];
    }

    int d;
    cin >> d;

    cout << shipWithinDays(weights, d);

    return 0;
}