#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs){

    string ans = "";

    //Hum first string ko reference maan rahe hain aur 1st str ke size tak iterate karenge
    for(int i = 0; i < strs[0].size(); i++){

        /*Step 1: strs[0] = "flower"
          Step 2: [strs[0]][i] = flower[i]
          
          i=2-> 'o'*/
        char ch = strs[0][i];

        //Baaki saari strings me same index check karo.
        for(int j = 1; j < strs.size(); j++){

            /*strs[j].size() -> j-th string ki length*/
            if(i >= strs[j].size() || strs[j][i] != ch){
                return ans;
            }
        }
        ans += ch;
    }
    return ans;
}

int main(){

    int n;
    cin >> n;

    vector<string> strs(n);

    for(int i = 0; i < n; i++){
        cin >> strs[i];
    }

    cout << longestCommonPrefix(strs);

    return 0;
}