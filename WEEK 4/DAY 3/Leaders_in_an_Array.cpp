#include<bits/stdc++.h>
using namespace std;

//brute
vector<int> leader(int a[], int n){

    vector<int> ans;

    for(int i=0; i<n; i++){

        bool leader = true;

        for(int j=i+1; j<n; j++){

            if(a[j] > a[i]){

                leader = false;
                break;
            }
        }

        if(leader){

            ans.push_back(a[i]);
        }
    }

    return ans;
}

//optimal
vector<int> leader(int a[], int n){
 
    vector<int> ans;
    int maxi=INT_MIN;

    for(int i=n-1;i>0;i--){
      if(a[i]>maxi){

        ans.push_back(a[i]);
          maxi=a[i];
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++){

        cin >> a[i];
    }

    vector<int> ans = leader(a,n);

    for(auto it : ans){

        cout << it << " ";
    }

    return 0;
}

