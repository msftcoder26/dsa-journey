#include<bits/stdc++.h>
using namespace std;

//brute
vector<int> rearrangeArray(vector<int>& nums){

    int n = nums.size();

    vector<int> pos;
    vector<int> neg;

    for(int i=0; i<n; i++){

        if(nums[i] > 0){

            pos.push_back(nums[i]);
        }

        else{

            neg.push_back(nums[i]);
        }
    }

    vector<int> ans(n);

    for(int i=0; i<n/2; i++){

        ans[2*i] = pos[i];

        ans[2*i+1] = neg[i];
    }

    return ans;
}

//optimal
vector<int> rearrangeArray(vector<int>& nums){

    int n = nums.size();

    vector<int> ans(n);

    int posIndex = 0;

    int negIndex = 1;

    for(int i=0; i<n; i++){

        if(nums[i] > 0){

            ans[posIndex] = nums[i];

            posIndex += 2;
        }

        else{

            ans[negIndex] = nums[i];

            negIndex += 2;
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

    vector<int> ans = rearrangeArray(nums);

    for(auto it : ans){

        cout << it << " ";
    }

    return 0;
}