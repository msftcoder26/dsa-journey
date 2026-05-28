#include<bits/stdc++.h>
using namespace std;

//brute approach
vector<int> unionArray(vector<int> &a, vector<int> &b){
    int n1=a.size();
    int n2=b.size();

    set<int> st; //duplicates remove + sorting

    for(int i=0;i<n1;i++){
        st.insert(a[i]);
    }

    for(int i=0;i<n2;i++){
        st.insert(b[i]);
    }

    vector<int> temp;
    for(auto it: st){ //iterare through set
        temp.push_back(it);
    }
    return temp;
}

// optimal approach
 // pointers for traversal
    int i = 0;
    int j = 0;

    // answer vector
    vector<int> ans;

    // traverse both arrays
    while(i < n1 && j < n2){

        // if element of a is smaller or equal
        if(a[i] <= b[j]){

            // insert only if ans is empty
            // OR current element is not duplicate
            if(ans.size() == 0 || ans.back() != a[i]){

                ans.push_back(a[i]);
            }

            // move pointer of first array
            i++;
        }

        else{

            // insert only if not duplicate
            if(ans.size() == 0 || ans.back() != b[j]){

                ans.push_back(b[j]);
            }

            // move pointer of second array
            j++;
        }
    }

    // if elements left in first array
    while(i < n1){

        // avoid duplicates
        if(ans.back() != a[i]){

            ans.push_back(a[i]);
        }

        i++;
    }

    // if elements left in second array
    while(j < n2){

        // avoid duplicates
        if(ans.back() != b[j]){

            ans.push_back(b[j]);
        }

        j++;
    }

    // return final union array
    return ans;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

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

    vector<int> ans = unionArray(a,b);

    for(auto it : ans){

        cout << it << " ";
    }


    return 0;
}



