#include<bits/stdc++.h>
using namespace std;

int main() {
    //index:    0 1 2 3 4
    int arr[5]={1,2,3,4,5}; //size: 0 to n-1
    for (int i= 0; i<5; i++){
        cout<< arr[i]<<endl;
    }
    // cout<<arr[5]; //Out of Bounds Access :prints garbage value as humara index 4 tak hi hai

    cout<< arr[3]<<endl;

    arr[4] += 12;
    cout<<arr[4]<<endl;

    string s = "This is Vidisha";
    cout << s<<endl;
    cout<< s[5];
    return 0;
}