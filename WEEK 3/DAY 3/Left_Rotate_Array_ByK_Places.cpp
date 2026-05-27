//brute force approach

#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d){

    int temp[d];

    // store first d elements

    for(int i=0; i<d; i++){

        temp[i] = arr[i];
    }

    // shift remaining elements left

    for(int i=d; i<n; i++){

        arr[i-d] = arr[i];
    }

    // put temp elements at end

    for(int i=n-d; i<n; i++){

        arr[i] = temp[i-(n-d)];
    }
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){

        cin >> arr[i];
    }

    int d;
    cin >> d;

    leftRotate(arr,n,d);

    for(int i=0; i<n; i++){

        cout << arr[i] << " ";
    }

    return 0;
}

//optimal approach
void leftRotate(vector<int>& nums, int k){

    int n = nums.size();

    k = k % n;

    reverse(nums.begin(), nums.begin()+k);

    reverse(nums.begin()+k, nums.end());

    reverse(nums.begin(), nums.end());
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

    leftRotate(nums,k);

    for(int i=0; i<n; i++){

        cout << nums[i] << " ";
    }

    return 0;
}