#include<bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(vector<int>& arr, int x){

    int n = arr.size();

    // Find Floor
    int floor = -1;

    int low = 0;
    int high = n - 1;

    while(low <= high){

        int mid = (low+high)/2;

        if(arr[mid] <= x){
            floor = arr[mid];
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    // Find Ceil
    int ceil = -1;

    low = 0;
    high = n - 1;

    while(low <= high){

        int mid = low + (high - low)/2;

        if(arr[mid] >= x){
            ceil = arr[mid];
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return {floor, ceil};
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int x;
    cin >> x;

    pair<int, int> ans = getFloorAndCeil(arr, x);

    cout << "Floor = " << ans.first << endl;
    cout << "Ceil = " << ans.second << endl;

    return 0;
}