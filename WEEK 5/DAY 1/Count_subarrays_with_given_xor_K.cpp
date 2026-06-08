#include<bits/stdc++.h>
using namespace std;

//brute
int countSubarrays(vector<int>& arr, int k){

    int n = arr.size();

    int cnt = 0;

    for(int i=0; i<n; i++){

        int xr = 0;

        for(int j=i; j<n; j++){

            xr ^= arr[j];

            if(xr == k){
                cnt++;
            }
        }
    }
    return cnt;
}

//optimal
int subarraysXor(vector<int>& arr, int k){

    // Stores frequency of prefix XORs
    unordered_map<int,int> mp;

    int xr = 0;
    int cnt = 0;

    // Important for subarrays
    // starting from index 0
    mp[0] = 1;

    for(int i=0; i<arr.size(); i++){

        // Current prefix XOR
        xr ^= arr[i];

        // Required previous XOR
        int x = xr ^ k;

        // Add all occurrences
        cnt += mp[x];

        // Store current XOR
        mp[xr]++;
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){

        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << subarraysXor(arr, k);

    return 0;
}