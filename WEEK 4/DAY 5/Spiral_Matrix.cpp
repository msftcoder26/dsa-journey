#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix){

    // Number of rows
    int n = matrix.size();

    // Number of columns
    int m = matrix[0].size();

    // Boundaries of current layer
    int top = 0; // Top boundary
    int bottom = n - 1; // Bottom boundary
    int left = 0; // Left boundary
    int right = m - 1; // Right boundary

    // Stores spiral traversal
    vector<int> ans;

    // Continue until boundaries cross each other
    while(top <= bottom && left <= right){

        // Traverse top row
        // Left -> Right
        for(int i = left; i <= right; i++){
            ans.push_back(matrix[top][i]);
        }
        // Top row processed
        // Left -> Right
        top++;

        // Traverse right column
        // Top -> Bottom
        for(int i = top; i <= bottom; i++){
            ans.push_back(matrix[i][right]);
        }
        // Right column processed
        // Top -> Bottom
        right--;

        // Traverse bottom row
        // Right -> Left
        // Check required to avoid duplicate traversal
        if(top <= bottom){

            for(int i = right; i >= left; i--){

                ans.push_back(matrix[bottom][i]);
            }

            // Bottom row processed
            // Right -> Left
            bottom--;
        }

        // Traverse left column
        // Bottom -> Top
        // Check required to avoid duplicate traversal
        if(left <= right){

            for(int i = bottom; i >= top; i--){

                ans.push_back(matrix[i][left]);
            }

            // Left column processed
            // Bottom -> Top
            left++;
        }
    }

    return ans;
}

int main(){

    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            cin >> matrix[i][j];
        }
    }

    vector<int> ans = spiralOrder(matrix);

    for(auto it : ans){

        cout << it << " ";
    }

    return 0;
}