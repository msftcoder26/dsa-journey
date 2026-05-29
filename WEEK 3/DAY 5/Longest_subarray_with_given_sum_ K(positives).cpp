#include<bits/stdc++.h>
using namespace std;

//brute
int longestSubarray(int arr[], int n, int k){

    int len = 0;

    for(int i=0; i<n; i++){

        int sum = 0;

        for(int j=i; j<n; j++){

            sum += arr[j];

            if(sum == k){

                len = max(len, j-i+1);
            }
        }
    }

    return len;
}

//better
int longestSubarray(int arr[], int n, int k){

    map<long long,int> preSumMap;

    long long sum = 0;

    int maxLen = 0;

    for(int i=0; i<n; i++){

        sum += arr[i];

        if(sum == k){

            maxLen = i + 1;
        }

        long long rem = sum - k;

        if(preSumMap.find(rem) != preSumMap.end()){

            int len = i - preSumMap[rem];

            maxLen = max(maxLen, len);
        }

        if(preSumMap.find(sum) == preSumMap.end()){

            preSumMap[sum] = i;
        }
    }

    return maxLen;
}

//optimal
int longestSubarray(int arr[], int n, int k){

    int left = 0;
    int right = 0;

    long long sum = arr[0];

    int maxLen = 0;

    while(right < n){

        while(left <= right && sum > k){

            sum -= arr[left];

            left++;
        }

        if(sum == k){

            maxLen = max(maxLen, right-left+1);
        }

        right++;

        if(right < n){

            sum += arr[right];
        }
    }

    return maxLen;
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){

        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << longestSubarray(arr, n, k);

    return 0;
}