#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t){

    /*mp1 : s -> t
      mp2 : t -> s*/
    unordered_map<char, char> mp1;
    unordered_map<char, char> mp2;

    for(int i = 0; i < s.size(); i++){

        char ch1 = s[i];
        char ch2 = t[i];

        // s -> t mapping check
        //Kya ch1 pehle se map me hai?
        if(mp1.count(ch1)){

            /*Agar ch1 pehle se kisi character pe map hai,
              aur ab woh kisi doosre character pe map hone ki koshish kar raha hai,
              to answer false hai.*/
            if(mp1[ch1] != ch2){
                return false;
            }
        }
        else{
            //Create new mapping mp1[ch1] = ch2;
            //ch1->ch2
            //"ch1 ki mapping ch2 ke saath store kar do."
            mp1[ch1] = ch2;
        }

        // t -> s mapping check
        if(mp2.count(ch2)){

            if(mp2[ch2] != ch1){
                return false;
            }
        }
        else{
            mp2[ch2] = ch1;
        }
    }
    return true;
}

int main(){

    string s, t;

    cin >> s;
    cin >> t;

    if(isIsomorphic(s, t)){
        cout << "true";
    }
    else{
        cout << "false";
    }

    return 0;
}