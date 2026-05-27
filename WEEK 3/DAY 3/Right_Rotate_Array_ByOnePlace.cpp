#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k){

    int n = nums.size();

    k = k % n;

    while(k--){

        int temp = nums[n-1];

        for(int i=n-1; i>0; i--){

            nums[i] = nums[i-1];
        }

        nums[0] = temp;
    }
}

int main(){

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i=0; i<n; i++){

        cin >> nums[i];
    }

    int k;
    cin >> k;

    rotate(nums,k);

    for(int i=0; i<n; i++){

        cout << nums[i] << " ";
    }

    return 0;
}