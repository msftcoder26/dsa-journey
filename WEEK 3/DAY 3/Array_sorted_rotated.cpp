#include<bits/stdc++.h>
using namespace std;

  bool check(vector<int>& arr) {

        int n = arr.size();

        int count = 0;

        for(int i=0; i<n; i++){

            if(arr[i] > arr[(i+1)%n]){
                count++;
            }
        }

        return count <= 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){

        cin >> arr[i];
    }

    cout << check(arr);
    return 0;
}