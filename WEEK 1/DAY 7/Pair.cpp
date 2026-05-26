#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    // //same datatype
    // pair<int,int> p = {1,3};
    // cout<< p.first<< " " <<p.second;

    // //different datatype
    // pair<int, string> p = {101, "Vidisha"};
    // cout<< p.first<< " " <<p.second;

    //nested pair
    pair<int, pair<int,int>> p = {1, {2,3}};
    cout << p.first << " " <<  p.second.first << " " << p.second.second;

    cout<<endl;
    //array of pairs
    pair<int,int> arr[3] = { {1,2}, {3,4}, {5,6}};
    cout<< arr[1].second;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    explainPair();

    return 0;
}