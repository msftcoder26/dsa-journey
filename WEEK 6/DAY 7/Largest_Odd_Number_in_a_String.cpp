#include<bits/stdc++.h>
using namespace std;

string largestOddNumber(string num){

    //traverse left to right
    for(int i = num.size() - 1; i >= 0; i--){

        //num[i] - '0' ka use character digit ko integer me convert karne ke liye hota hai.
        /*num[i] actually character ha
        
        '5' - '0' => 53 - 48 = 5*/
        if((num[i] - '0') % 2 == 1){
            return num.substr(0, i + 1);
        }
    }
    return "";
}

int main(){

    string num;
    cin >> num;

    cout << largestOddNumber(num);

    return 0;
}