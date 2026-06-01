#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& arr){

    vector<int> pos;
    vector<int> neg;

    for(int i=0; i<arr.size(); i++){

        if(arr[i] > 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    vector<int> ans;

    int i = 0;
    int j = 0;

    while(i < pos.size() && j < neg.size()){

        ans.push_back(pos[i++]);

        ans.push_back(neg[j++]);
    }

    while(i < pos.size()){

        ans.push_back(pos[i++]);
    }

    while(j < neg.size()){

        ans.push_back(neg[j++]);
    }

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

    vector<int> ans = rearrangeArray(nums);

    for(auto it : ans){

        cout << it << " ";
    }

    return 0;
}