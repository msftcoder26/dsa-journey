#include<bits/stdc++.h>
using namespace std;

//type-1 : find element at R & C
int nCr(int n, int r){

    long long res = 1;

    for(int i=0; i<r; i++){

        res = res * (n - i);
        res = res / (i + 1);
    }

    return res;
}

//type-2 : print nth row
vector<int> generateRow(int n){

    vector<int> ans;

    long long res = 1;

    ans.push_back(1);

    for(int col=1; col<n; col++){

        res = res * (n-col);

        res = res / col;

        ans.push_back(res);
    }

    return ans;
}

//type-3 : Print Entire Pascal Triangle
vector<vector<int>> generate(int n){

    vector<vector<int>> ans;

    for(int row=1; row<=n; row++){

        vector<int> temp;

        long long res = 1;

        temp.push_back(1);

        for(int col=1; col<row; col++){

            res = res * (row-col);

            res = res / col;

            temp.push_back(res);
        }

        ans.push_back(temp);
    }

    return ans;
}
int main(){

    int row, col;
    cin >> row >> col;

    cout << nCr(row-1, col-1);

    return 0;
}