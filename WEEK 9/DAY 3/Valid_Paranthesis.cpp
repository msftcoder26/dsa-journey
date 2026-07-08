#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {

    stack<char> st;

    for(char ch : s) {

        // Opening brackets
        if(ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }

        // Closing brackets
        else {

            if(st.empty()) {
                return false;
            }

            if(ch == ')' && st.top() != '(') {
                return false;
            }

            if(ch == '}' && st.top() != '{') {
                return false;
            }

            if(ch == ']' && st.top() != '[') {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main() {

    string s;

    cout << "Enter brackets: ";
    cin >> s;

    if(isValid(s))
        cout << "Valid Parentheses";
    else
        cout << "Invalid Parentheses";

    return 0;
}