#include<bits/stdc++.h>
using namespace std;

//type-1 : find element at R & C
int nCr(int n, int row){

    long long res = 1;

    for(int i=0; i<row; i++){

        res = res * (n - i);
        res = res / (i + 1);
    }

    return res;
}

//type-2 : print nth row
vector<int> generateRow(int row){

    vector<int> ans;

    long long res = 1;

    ans.push_back(1);
 
    for(int col=1; col<row; col++){

        res = res * (row-col);

        res = res / col;

        ans.push_back(res);
    }

    return ans;
}

//type-3 : Print Entire Pascal Triangle
//generateRow() -> creates one row
 vector<int> generateRow(int row){

        long long res = 1;
        vector<int> ans;

        ans.push_back(1);

        for(int col=1; col<row; col++){

            res = res * (row-col);
            res = res / col;

            ans.push_back(res);
        }

        return ans;
    }

    //generate() -> creates entire triangle
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        for(int row=1; row<=numRows; row++){

            ans.push_back(generateRow(row));
        }

        return ans;
    }
int main(){

    int row, col;
    cin >> row >> col;

    cout << nCr(row-1, col-1);

    return 0;
}