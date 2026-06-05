#include<bits/stdc++.h>
using namespace std;

//brute
void rotate(vector<vector<int>>& matrix){

    int n = matrix.size();

    vector<vector<int>> ans(n, vector<int>(n));

    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            ans[j][n-1-i] = matrix[i][j];
        }
    }

    matrix = ans;
}

//optimal
void rotate(vector<vector<int>>& matrix){

    int n = matrix.size();

    // Transpose matrix
    for(int i=0; i<n; i++){

        for(int j=i+1; j<n; j++){

            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row
    for(int i=0; i<n; i++){

        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            cin >> matrix[i][j];
        }
    }

    rotate(matrix);

    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            cout << matrix[i][j] << " ";
        }

        cout << "\n";
    }

    return 0;
} 