#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxConsecutiveOnes(vector<int>& nums, int k) {

    int l = 0;
    int r = 0;

    int zeroCount = 0;
    int maxLen = 0;

    while (r < nums.size()) {

        // Current element 0 hai
        if (nums[r] == 0) {
            zeroCount++;
        }

        // Window me k se zyada zeroes aa gaye
        while (zeroCount > k) {

            // Left side ka zero window se bahar ja raha hai
            if (nums[l] == 0) {
                zeroCount--;
            }
            l++;
        }

        // Current valid window ki length
        int len = r - l + 1;

        maxLen = max(maxLen, len);

        // Right pointer aage move karo
        r++;
    }
    return maxLen;
}

int main() {

    int n;

    cout << "Enter array size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k;

    cout << "Enter maximum zeroes that can be flipped: ";
    cin >> k;

    int answer = maxConsecutiveOnes(nums, k);

    cout << "Maximum consecutive ones: " << answer;

    return 0;
}