#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // //print 1st element 
    vector<int> v = {10,20,30};
    vector<int>::iterator it = v.begin();
    auto it= v.begin();
    cout << *it;

    cout<<endl;

    // //printing lat element
    // // end : points to one position AFTER last element.
    // // vector<int>::iterator it = v.end();
    // // cout << *it;

    vector<int>::iterator it = v.end();
    it--;
    cout << *it;

    cout<< endl;
    //printing all element
    for(auto it = v.begin(); it!= v.end(); it++){
        cout<< *it << " ";
    }


    // accessing at specific index
    cout<< v[0];
    cout<< v.at(0);
    
    //Insert function
    vector<int> v(2,100); //100 100
    v.insert(v.begin(),300); //300 100 100
    v.insert(v.begin()+1, 2, 10); // 300 10 10 100 100


    //(10,20)
    cout<<v.size(); //2

    v.pop_back(); //10

    //swap
    vector<int> v1 = {10,20};
    vector<int> v2 = {30,40};
    v1.swap(v2); //v1=30 40,  v2=10 20

    return 0;
}