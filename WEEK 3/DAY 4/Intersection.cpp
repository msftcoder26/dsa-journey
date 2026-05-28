#include<bits/stdc++.h>
using namespace std;

vector<int> intersectionArray(vector<int> &a, vector<int> &b){

    int n1 = a.size();
    int n2 = b.size();

    int i = 0;
    int j = 0;

    vector<int> ans;

    while(i < n1 && j < n2){

        // if both elements equal
        if(a[i] == b[j]){

            ans.push_back(a[i]);

            i++;
            j++;
        }

        // if a element smaller
        else if(a[i] < b[j]){

            i++;
        }

        // if b element smaller
        else{

            j++;
        }
    }

    return ans;
}

int main(){

    int n1;
    cin >> n1;

    vector<int> a(n1);

    for(int i=0; i<n1; i++){

        cin >> a[i];
    }

    int n2;
    cin >> n2;

    vector<int> b(n2);

    for(int i=0; i<n2; i++){

        cin >> b[i];
    }

    vector<int> ans = intersectionArray(a,b);

    for(auto it : ans){

        cout << it << " ";
    }

    return 0;
}