#include<bits/stdc++.h>
using namespace std;

//brute
vector<int> majorityElement(vector<int>& nums) {

    int n = nums.size();

    vector<int> ans;

    for(int i=0; i<n; i++){

        // Skip if already present in answer
        if(ans.size() == 0 || ans[0] != nums[i]){

            int cnt = 0;

            for(int j=0; j<n; j++){

                if(nums[j] == nums[i]){

                    cnt++;
                }
            }

            if(cnt > n/3){

                ans.push_back(nums[i]);
            }
        }

        if(ans.size() == 2) break;
    }

    return ans;
}

//better
vector<int> majorityElement(vector<int>& nums){

    vector<int> ls;
    map<int,int> mpp;

    int n = nums.size();
    int mini = (int)(n/3) + 1;

    for(int i=0; i<n; i++){

       mpp[nums[i]]++;

       if(mpp[nums[i]] == mini){
            ls.push_back(nums[i]);
        }

        if(ls.size() == 2) break;
    }
}

//optimal
vector<int> majorityElement(vector<int>& nums) {

    int cnt1 = 0;
    int cnt2 = 0;

    int ele1 = INT_MIN;
    int ele2 = INT_MIN;

    for(int i=0; i<nums.size(); i++){

        if(cnt1 == 0 && nums[i] != ele2){

            cnt1 = 1;
            ele1 = nums[i];
        }

        else if(cnt2 == 0 && nums[i] != ele1){

            cnt2 = 1;
            ele2 = nums[i];
        }

        else if(nums[i] == ele1){

            cnt1++;
        }

        else if(nums[i] == ele2){

            cnt2++;
        }

        else{

            cnt1--;
            cnt2--;
        }
    }

    // Verification pass
    cnt1 = 0;
    cnt2 = 0;

    for(int i=0; i<nums.size(); i++){

        if(nums[i] == ele1) cnt1++;

        else if(nums[i] == ele2) cnt2++;
    }

    vector<int> ans;

    int mini = nums.size()/3 + 1;

    if(cnt1 >= mini) ans.push_back(ele1);

    if(cnt2 >= mini) ans.push_back(ele2);

    return ans;
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

    vector<int> ans = majorityElement(nums);

    for(auto it : ans){

        cout << it << " ";
    }

    return 0;
}