#include<bits/stdc++.h>
using namespace std;

//using lower and upper bound
int lowerBound(vector<int>& nums, int target){

    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int ans = n;

    while(low <= high){

        int mid = low + (high - low)/2;

        if(nums[mid] >= target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int upperBound(vector<int>& nums, int target){

    int n = nums.size();

    int low = 0;
    int high = n - 1;

    int ans = n;

    while(low <= high){

        int mid = (low+high)/2;

        if(nums[mid] > target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

pair<int,int> firstAndLast(vector<int>& nums, int target){

    int n = nums.size();

    int lb = lowerBound(nums, target);

    if(lb == n || nums[lb] != target){
        return {-1, -1};
    }

    int ub = upperBound(nums, target);

    return {lb, ub - 1};
}

//binary search
pair<int,int> firstAndLast(vector<int>& arr, int target){

    int n = arr.size();

    // First Occurrence
    int first = -1;
    int low = 0;
    int high = n - 1;

    while(low <= high){

        int mid = low + (high - low)/2;

        if(arr[mid] == target){
            first = mid;
            high = mid - 1;   // search left
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    // Last Occurrence
    int last = -1;
    low = 0;
    high = n - 1;

    while(low <= high){

        int mid = low + (high - low)/2;

        if(arr[mid] == target){
            last = mid;
            low = mid + 1;    // search right
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return {first, last};
}

int main(){

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int target;
    cin >> target;

    pair<int,int> ans = firstAndLast(nums, target);

    cout << "First = " << ans.first << endl;
    cout << "Last = " << ans.second << endl;

    return 0;
}