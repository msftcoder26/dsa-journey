#include<bits/stdc++.h>
using namespace std;

int main() {

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    st.pop();

    st.emplace(5);
    st.push(6);

    st.pop();

    while(!st.empty()){

        cout << st.top() << " ";

        st.pop();
    }

    // for (auto it :st){
    //     cout << st << " ";
    // }
    /* this wont work coz stack iterable container nahi hai.
    Stack me: begin(), end(), iterators nahi hote.*/

    /*Stack access only through: st.top(), st.pop(), st.push().*/
    return 0;
}