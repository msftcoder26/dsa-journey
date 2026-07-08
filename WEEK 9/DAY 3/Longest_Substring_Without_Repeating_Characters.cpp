#include <iostream>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s){ 

    unordered_set<char> st;

    int left = 0;
    int ans = 0;

    for(int right = 0; right < s.length(); right++){

        while(st.find(s[right]) != st.end()){
            st.erase(s[left]);
            left++;
        }
        st.insert(s[right]);
        ans = max(ans, right - left + 1);
    }
    return ans;
}

int main(){

    string s;

    cout << "Enter string : ";
    cin >> s;

    cout << "Longest Length = " << lengthOfLongestSubstring(s);

    return 0;
}