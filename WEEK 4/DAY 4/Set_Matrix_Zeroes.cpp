#include<bits/stdc++.h>
using namespace std;

// Mark entire row with -1
void markRow(vector<vector<int>>& matrix, int n, int m, int i){

    for(int j=0; j<m; j++){

        if(matrix[i][j] != 0){

            matrix[i][j] = -1;
        }
    }
}

// Mark entire column with -1
void markCol(vector<vector<int>>& matrix, int n, int m, int j){

    for(int i=0; i<n; i++){

        if(matrix[i][j] != 0){

            matrix[i][j] = -1;
        }
    }
}

// Brute Force
void setZeroes(vector<vector<int>>& matrix){

    int n = matrix.size();
    int m = matrix[0].size();

    // Find all zeroes and mark rows & columns
    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            if(matrix[i][j] == 0){

                markRow(matrix, n, m, i);

                markCol(matrix, n, m, j);
            }
        }
    }

    // Convert all -1 to 0
    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            if(matrix[i][j] == -1){

                matrix[i][j] = 0;
            }
        }
    }
}

//better
void setZeroes(vector<vector<int>>& matrix){

    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> row(n,0);
    vector<int> col(m,0);

    // Mark rows and columns
    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            if(matrix[i][j] == 0){

                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Fill zeroes
    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            if(row[i] || col[j]){

                matrix[i][j] = 0;
            }
        }
    }
}

//optimal
void setZeroes(vector<vector<int>>& matrix){

    int n = matrix.size();
    int m = matrix[0].size();

    int col0 = 1;

    // Mark rows and columns
    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            if(matrix[i][j] == 0){

                matrix[i][0] = 0;

                if(j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }

    // Fill from back
    for(int i=n-1; i>=0; i--){

        for(int j=m-1; j>=1; j--){

            if(matrix[i][0] == 0 ||
               matrix[0][j] == 0){

                matrix[i][j] = 0;
            }
        }

        if(col0 == 0){

            matrix[i][0] = 0;
        }
    }
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

    setZeroes(matrix);

    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            cout << matrix[i][j] << " ";
        }

        cout << "\n";
    }

    return 0;
}