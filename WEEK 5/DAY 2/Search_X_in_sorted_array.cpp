#include<bits/stdc++.h>
using namespace std;

//brute
int search(vector<int>& nums, int target) {

    for(int i=0; i<nums.size(); i++) {

        if(nums[i] == target) {
            return i;
        }
    }

    return -1;
}

//optimal (binary search)
int search(vector<int>& nums, int target) {

    int low = 0;
    int high = nums.size() - 1;

    while(low <= high) {

        int mid = (low + high)/2;

        if(nums[mid] == target) {
            return mid;
        }

        else if(nums[mid] < target) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i=0; i<n; i++){

        cin >> nums[i];
    }

    int target;
    cin >> target;

    cout << search(nums, target);

    return 0;
}