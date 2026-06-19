#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums){

    int n= nums.size();

    //if only 1 el present
    if(n==1){
        return 0;
    }

    //if 1st el is peak
    if(nums[0]>nums[1]){
        return 0;
    }

    //if last el is peak
    if(nums[n-1]>nums[n-2]){
        return n-1;
    }

    // we aren't using low=0 & high=n-1 coz 1st and last el ke liye alag se code likha hai 
    int low = 1;
    int high = n-2;

    while(low <= high){

        int mid = (low +high)/2;

        if(nums[mid] > nums[mid + 1] && nums[mid]> nums[mid-1]){
            return mid;
        }
        else if(nums[mid] > nums[mid-1]){
            low = mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){

    vector<int> nums = {1,2,3,1};

    cout << findPeakElement(nums);

    return 0;
}