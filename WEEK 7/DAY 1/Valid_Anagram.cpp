#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){

    if(s.size() != t.size()){
        return false;
    }

    vector<int> freq(26, 0);

    for(int i = 0; i < s.size(); i++){

        //freq[ch - 'a']: Character ko uske 0-25 index me convert karo.
        freq[s[i] - 'a']++;

        freq[t[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++){

        if(freq[i] != 0){
            return false;
        }
    }
    return true;
}

int main(){

    string s, t;

    cin >> s >> t;

    if(isAnagram(s, t)){
        cout << "true";
    }
    else{
        cout << "false";
    }

    return 0;
}
