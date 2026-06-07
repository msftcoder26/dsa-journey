#include<bits/stdc++.h>
using namespace std;

//brute
vector<vector<int>> threeSum(vector<int>& nums){

    int n = nums.size();

    set<vector<int>> st;

    for(int i=0; i<n; i++){

        for(int j=i+1; j<n; j++){

            for(int k=j+1; k<n; k++){

                if(nums[i] + nums[j] + nums[k] == 0){

                    vector<int> temp = {nums[i], nums[j], nums[k]};

                    sort(temp.begin(), temp.end());

                    st.insert(temp);
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());

    return ans;
}

//better(hashing)
vector<vector<int>> threeSum(vector<int>& nums) {

    int n = nums.size();

    set<vector<int>> st;

    for(int i=0; i<n; i++){

        unordered_set<int> hashset;

        for(int j=i+1; j<n; j++){

            int third = -(nums[i] + nums[j]);

            if(hashset.find(third) != hashset.end()){

                vector<int> temp = {nums[i], nums[j], third};

                sort(temp.begin(), temp.end());

                st.insert(temp);
            }

            hashset.insert(nums[j]);
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());

    return ans;
}

//optimal
vector<vector<int>> threeSum(vector<int>& nums) {

    int n = nums.size();

    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    for(int i=0; i<n; i++){

        // Skip duplicates
        if(i > 0 && nums[i] == nums[i-1]){
            continue;
        }

        int j = i + 1;
        int k = n - 1;

        while(j < k){
            long long sum = nums[i] + nums[j] + nums[k];

            if(sum < 0){
                j++;
            }
            else if(sum > 0){
                k--;
            }
            else{
                ans.push_back({nums[i], nums[j], nums[k]});

                j++;
                k--;

                // Skip duplicate j
                while(j < k && nums[j] == nums[j-1]){
                    j++;
                }

                // Skip duplicate k
                while(j < k && nums[k] == nums[k+1]){
                    k--;
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

    vector<vector<int>> ans = threeSum(nums);

    for(auto triplet : ans){

        for(auto x : triplet){

            cout << x << " ";
        }

        cout << "\n";
    }

    return 0;
}