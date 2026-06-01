#include<bits/stdc++.h>
using namespace std;

//better
int maxSubArray(vector<int>& nums){

    int maxi = INT_MIN;

    int n = nums.size();

    for(int i=0; i<n; i++){

        int sum = 0;

        for(int j=i; j<n; j++){

            sum += nums[j];

            maxi = max(maxi, sum);
        }
    }

    return maxi;
}

//optimal
int maxSubArray(vector<int>& nums){

    int sum = 0;

    int maxi = INT_MIN;

    for(int i=0; i<nums.size(); i++){

        sum += nums[i];

        maxi = max(maxi, sum);

        if(sum < 0){

            sum = 0;
        }
    }

    return maxi;
}

//print the subarray
int maxSubArray(vector<int>& nums){

    int sum = 0;

    int maxi = INT_MIN;

    int start = 0;

    int ansStart = -1;
    int ansEnd = -1;

    for(int i=0; i<nums.size(); i++){

        if(sum == 0){

            start = i;
        }

        sum += nums[i];

        if(sum > maxi){

            maxi = sum;

            ansStart = start;
            ansEnd = i;
        }

        if(sum < 0){

            sum = 0;
        }
    }

    cout << "Subarray: ";

    for(int i=ansStart; i<=ansEnd; i++){

        cout << nums[i] << " ";
    }

    cout << endl;

    return maxi;
}

int main(){

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i=0; i<n; i++){

        cin >> nums[i];
    }

    cout << maxSubArray(nums);

    return 0;
}