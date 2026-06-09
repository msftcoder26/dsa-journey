#include<bits/stdc++.h>
using namespace std;

//brute
int upperBound(vector<int>& arr, int x){

    int n = arr.size();

    for(int i=0; i<n; i++){

        if(arr[i] > x){

            return i;
        }
    }

    return n;
}

//optimal (Binary Search)
int upperBound(vector<int>& arr, int x){

    int n = arr.size();

    int low = 0;
    int high = n - 1;
    int ans = n;

    while(low <= high){

        int mid = low + (high - low)/2;

        if(arr[mid] > x){
            ans = mid;
            high = mid - 1;
        }

        else{
            low = mid + 1;
        }
    }
    return ans;
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

    int x;
    cin >> x;

    cout << lowerBound(arr, x);

    return 0;
}