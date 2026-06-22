#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s){

    vector<string> words;

    string temp = "";

    for(int i = 0; i < s.size(); i++){

        //' ' : space character
        if(s[i] != ' '){
            temp += s[i];
        }
        else{ //else tabhi chalega jab space milega

            //Space milte hi previous word store karo
            if(temp != ""){
                words.push_back(temp);
                temp = ""; //temp ko empty string bana do
            }
        }
    }

    //Last word store karo (because string usually space pe end nahi hoti).
    if(temp != ""){
        words.push_back(temp);
    }

    string ans = "";

    for(int i = words.size()-1; i >= 0; i--){

        ans += words[i];

        if(i != 0){
            ans += " ";
        }
    }
    return ans;
}

int main(){

    string s;

    getline(cin, s);

    cout << reverseWords(s);

    return 0;
}