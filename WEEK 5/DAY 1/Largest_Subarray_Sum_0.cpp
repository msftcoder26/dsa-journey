#include<bits/stdc++.h>
using namespace std;

//brute 
int maxLen(vector<int>& arr){

    int n = arr.size();
    int maxi = 0;

    for(int i=0; i<n; i++){
        int sum = 0;

        for(int j=i; j<n; j++){
            sum += arr[j];

            //sum==0 coz its given Find the longest subarray whose sum is 0.
            if(sum == 0){
                maxi = max(maxi, j-i+1);
            }
        }
    }
    return maxi;
}

//optimal
int maxLen(vector<int>& arr){

    unordered_map<int,int> mp;

    int sum = 0;
    int maxi = 0;

    for(int i=0; i<arr.size(); i++){

        // Calculate prefix sum
        sum += arr[i];

        // Sum from index 0 to i is 0
        if(sum == 0){
            maxi = i + 1;
        }

        //length of zero sum subarray = current index(i) - prev index(mp[sum])
        // Same prefix sum seen before
        else if(mp.find(sum) != mp.end()){
            maxi = max(maxi, i - mp[sum]);
        }

        // Store first occurrence only
        else{
            mp[sum] = i;
        }
    }
    return maxi;
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

    cout << maxLen(arr);
    
    return 0;
}