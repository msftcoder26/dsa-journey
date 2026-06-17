#include<bits/stdc++.h>
using namespace std;

/*Kya minimum distance = dist rakhke
  k cows place kar sakte hain?*/

bool canPlace(vector<int>& arr, int k, int dist){

    int cows = 1;
    int last = arr[0];

    for(int i = 1; i < arr.size(); i++){

        /*Current stall aur last placed cow ke beech
        distance kam se kam dist hona chahiye.*/
        if(arr[i] - last >= dist){
            cows++;
            last = arr[i];
        }
    }
    return cows >= k;
}

int aggressiveCows(vector<int>& arr, int k){

    sort(arr.begin(), arr.end());

    int low = 1;

    //high = max_stall - min_stall
    int high = arr.back() - arr.front();

    int ans = 0;

    while(low <= high){

        int mid = low + (high - low)/2;

        if(canPlace(arr, k, mid)){   // YES
            ans = mid;
            low = mid + 1;     // try bigger distance
        }
        else{   // NO
            high = mid - 1;
        }
    }
    return ans;
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << aggressiveCows(arr, k);

    return 0;
}