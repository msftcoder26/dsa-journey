#include<bits/stdc++.h>
using namespace std;

//brute
int singleNonDuplicate(vector<int>& nums){

    int n = nums.size();

    if(n == 1){
        return nums[0];
    }

    for(int i = 0; i < n; i++){

        // First element
        if(i == 0){
            if(nums[i] != nums[i + 1]){
                return nums[i];
            }
        }

        // Last element
        else if(i == n - 1){
            if(nums[i] != nums[i - 1]){
                return nums[i];
            }
        }

        // Middle elements
        else{
            if(nums[i] != nums[i - 1] &&
               nums[i] != nums[i + 1]){

                return nums[i];
            }
        }
    }
    return -1;
}

//better
int singleNonDuplicate(vector<int>& nums){

    int xr = 0;

    for(int num : nums){
        xr ^= num;
    }

    return xr;
}

//optimal
int singleNonDuplicate(vector<int>& nums){

    int n = nums.size();

    if(n == 1){
        return nums[0];
    }

    if(nums[0] != nums[1]){
        return nums[0];
    }

    if(nums[n-1] != nums[n-2]){
        return nums[n-1];
    }

    int low = 1;
    int high = n - 2;

    while(low <= high){

        int mid = low + (high - low)/2;

        //not equivalent to left
        if(nums[mid] != nums[mid-1] &&
            //not equivalent to right
           nums[mid] != nums[mid+1]){

            return nums[mid];
        }

        //standing at odd index and left half is equal
        if((mid % 2 == 1 && nums[mid] == nums[mid-1]) ||

           //standing at even index and right half is equal 
           (mid % 2 == 0 && nums[mid] == nums[mid+1])){

            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    cout << singleNonDuplicate(nums);

    return 0;
}