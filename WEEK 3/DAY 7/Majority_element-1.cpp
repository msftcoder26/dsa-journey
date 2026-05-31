#include<bits/stdc++.h>
using namespace std;


//brute
int majorityElement(vector<int>& nums) {

    int n = nums.size();

    for(int i=0; i<n; i++){

        int cnt = 0;

        for(int j=0; j<n; j++){

            if(nums[j] == nums[i]){

                cnt++;
            }
        }

        if(cnt > n/2){

            return nums[i];
        }
    }

    return -1;
}

//better(hash map)
int majorityElement(vector<int>& nums) {

    int n = nums.size();

    unordered_map<int,int> mpp;

    for(int i=0; i<n; i++){

        mpp[nums[i]]++;
    }

    for(auto it : mpp){

        if(it.second > n/2){

            return it.first;
        }
    }

    return -1;
}

//optimal (Moore's Voting Algorithm)
int majorityElement(vector<int>& nums) {

    int cnt = 0;
    int el;

    for(int i=0; i<nums.size(); i++){

        if(cnt == 0){

            cnt = 1;
            el = nums[i];
        }

        else if(nums[i] == el){

            cnt++;
        }

        else{

            cnt--;
        }
    }

    return el;
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

    cout << majorityElement(nums);

    return 0;
}