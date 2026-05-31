#include<bits/stdc++.h>
using namespace std;

//brute
vector<int> twoSum(vector<int> & nums, int target){
    int n=nums.size();

    for(int i=0;i<n;i++){
        for(int j=i+1; j<n;j++){
            if(nums[i] + nums[j] == target){
                return {i,j}; // return "YES";
            }
        }
    }
    return {}; //return "NO";
}

//better
vector<int> twoSum(vector<int>& a, int target){

    unordered_map<int,int> mpp;

    int n=a.size();

    for(int i=0;i<n;i++){
        int need = target - a[i];

        if(mpp.find(need) != mpp.end()){
            return {mpp[need], i}; //return "yes"
        }
        mpp[a[i]] = i;
    }
    return {}; //return "no"
}

//No better solution exists for returning original indices.
//For the index version: Hash Map = Optimal

//optimal(sort+two pointer)
string twoSum(vector<int>& arr, int target){

     sort(arr.begin(), arr.end());

    int left = 0;
    int right = arr.size()-1;

    while(left < right){

        int sum = arr[left] + arr[right];

        if(sum == target){

            return "YES";
        }

        else if(sum < target){

            left++;
        }

        else{

            right--;
        }
    }

    return "NO";
}
    
    int main(){
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

    vector<int> ans = twoSum(nums, target);

    cout << ans[0] << " " << ans[1];
    
    return 0;
}