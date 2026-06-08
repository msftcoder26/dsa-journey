#include<bits/stdc++.h>
using namespace std;

//brute
vector<vector<int>> fourSum(vector<int>& nums, int target){

    int n = nums.size();

    set<vector<int>> st;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                for(int l=k+1; l<n; l++){

                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];

                    if(sum == target){
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};

                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

//better
vector<vector<int>> fourSum(vector<int>& nums, int target) {

    int n = nums.size();

    set<vector<int>> st;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){

            unordered_set<long long> hashset;
            for(int k=j+1; k<n; k++){

                long long fourth = (long long)target - (nums[i] + nums[j] + nums[k]);

                if(hashset.find(fourth) != hashset.end()){
                    vector<int> temp = {nums[i], nums[j], nums[k], (int)fourth};

                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[k]);
            }
        }
    }
    return vector<vector<int>>(st.begin(), st.end());
}

//optimal
vector<vector<int>> fourSum(vector<int>& nums, int target) {

    int n = nums.size();

    vector<vector<int>> ans;

    // Sort array
    sort(nums.begin(), nums.end());

    // Select first element
    for(int i=0; i<n; i++) {

        // Skip duplicate i
        if(i > 0 && nums[i] == nums[i-1]) {
            continue;
        }

        // Select second element
        for(int j=i+1; j<n; j++) {

            // Skip duplicate j
            if(j > i+1 && nums[j] == nums[j-1]) {
                continue;
            }

            int left = j + 1;
            int right = n - 1;

            while(left < right) {
                // Use long long to avoid overflow
                long long sum =
                (long long)nums[i]
                + nums[j]
                + nums[left]
                + nums[right];

                if(sum < target) {
                    left++;
                }

                else if(sum > target) {
                    right--;
                }

                else {
                    ans.push_back({nums[i], nums[j], nums[left], nums[right]});

                    left++;
                    right--;

                    // Skip duplicate left values
                    while(left < right &&
                        nums[left] == nums[left-1]) {
                        left++;
                    }

                    // Skip duplicate right values
                    while(left < right &&
                        nums[right] == nums[right+1]) {
                        right--;
                    }
                }
            }
        }
    }

    return ans;
}

int main(){

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i=0; i<n; i++){

        cin >> nums[i];
    }

    int target;
    cin >> target;

    vector<vector<int>> ans = fourSum(nums, target);

    for(auto quad : ans){

        for(auto x : quad){

            cout << x << " ";
        }

        cout << "\n";
    }

    return 0;
}