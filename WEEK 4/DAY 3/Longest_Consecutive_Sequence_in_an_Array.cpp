#include<bits/stdc++.h>
using namespace std;

//brute
bool linearSearch(int a[], int n, int nums){

    for(int i=0; i<n; i++){

        if(a[i] == nums){

            return true;
        }
    }

    return false;
}

int longestConsecutive(int a[], int n){

    if(n == 0) return 0;
    int longest = 1;

    for(int i=0; i<n; i++){

        int x = a[i];
        int cnt = 1;

        while(linearSearch(a,n,x+1)){

            x = x + 1;
            cnt++;
        }

        longest = max(longest,cnt);
    }

    return longest;
}

//better
int longestConsecutive(vector<int>& nums){

    int n = nums.size();

    if(n==0){
        return 0;
    }

    sort(nums.begin(), nums.end());

    // Stores previous element in the sequence
    int lastSmaller= INT_MIN;

    // Stores maximum sequence length found so far
    int longest = 1;

    // Stores current sequence length
    int cnt = 0;

    for(int i=0; i<n; i++){

        // Consecutive element found
        // Example: 2 comes after 1
        //current - 1 == lastSmaller
        if(nums[i]-1 == lastSmaller){
            cnt++;
            lastSmaller = nums[i];
        }

        // New element but not consecutive
        // Also handles duplicates
        else if(lastSmaller != nums[i]){
            cnt = 1;
            lastSmaller = nums[i];
        }

        // Update answer
        longest = max(longest,cnt);
    }

    return longest;
}

//optimal
int longestConsecutive(vector<int>& nums){

    int n=nums.size();

    if(n==0){
        return 0;
    }

    int longest = 1;

    unordered_set<int> st;

    for(int i=0;i<n;i++){
        st.insert(nums[i]);
    }

    for(auto it : st){

        // Start counting only if it is
        // the beginning of a sequence

        //st.find(x) means: Check if x exists in the set.
        /*"The previous number does not exist, so this is the beginning of a consecutive sequence."*/
        if(st.find(it-1) == st.end()){

            int cnt = 1;
            int x = it;

            // Count consecutive elements
            //As long as the next consecutive number exists, keep extending the sequence.
            while(st.find(x+1) != st.end()){

                x++;
                cnt++;
            }

            longest = max(longest,cnt);
        }
    }

    return longest;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    cout << longestConsecutive(a, n);

    return 0;
}