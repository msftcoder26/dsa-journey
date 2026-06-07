#include<bits/stdc++.h>
using namespace std;

//brute
vector<vector<int>> merge(vector<vector<int>>& intervals) {

    int n = intervals.size();

    vector<vector<int>> ans;

    sort(intervals.begin(), intervals.end());

    for(int i=0; i<n; i++){

        int start = intervals[i][0];
        int end = intervals[i][1];

        // Interval already merged
        if(!ans.empty() && end <= ans.back()[1]){
            continue;
        }

        // Try to merge with all overlapping intervals
        for(int j=i+1; j<n; j++){

            if(intervals[j][0] <= end){

                end = max(end, intervals[j][1]);
            }

            else{
                break;
            }
        }

        ans.push_back({start, end});
    }

    return ans;
}

//optimal
vector<vector<int>> merge(vector<vector<int>>& intervals) {

    int n = intervals.size();

    vector<vector<int>> ans;

    sort(intervals.begin(), intervals.end());

    for(int i=0; i<n; i++){

        // First interval
        if(ans.empty()){

            ans.push_back(intervals[i]);
        }

        // Overlap exists
        else if(intervals[i][0] <= ans.back()[1]){

            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }

        // No overlap
        else{

            ans.push_back(intervals[i]);
        }
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));

    for(int i=0; i<n; i++){

        cin >> intervals[i][0] >> intervals[i][1];
    }

    vector<vector<int>> ans = merge(intervals);

    for(auto it : ans){

        cout << "[" << it[0] << "," << it[1] << "] ";
    }

    return 0;
}