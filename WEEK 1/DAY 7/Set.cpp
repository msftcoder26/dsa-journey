#include<bits/stdc++.h>
using namespace std;

int main() {

    set<int> st;

    st.insert(5);
    st.insert(1);
    st.emplace(1);
    st.insert(3);
    st.insert(4);

    for(auto it : st){
        cout << it << " ";
    }

    cout<<endl;

    // auto it =st.find(3);
    // cout << *it;

    // cout<<endl;

    auto it =st.find(8);
    if(it != st.end()){
    cout << *it;
    }
     else{
    cout << "Not Found";
    }

    cout<<endl;
    st.erase(5); // delets 5 
    for(auto it : st){
        cout << it << " ";
    }


    cout<<endl;
    int cnt = st.count(1);
    cout << cnt;

    cout<<endl;
    if(st.count(5)){
    cout << "Present";
    }else{
    cout << "Absent";
    }
    
    return 0;
}