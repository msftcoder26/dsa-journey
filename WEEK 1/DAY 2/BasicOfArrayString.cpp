#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5], i;
    //cin>>arr is wrong coz cin can take input into a single integer.
    // for (i=0; i<5; i++){
    //     cin>>arr[i];
    //     cout<<"Values are:"<<arr;
    // }
    //for input
    for(i = 0; i < 5; i++){
        cin >> arr[i];
    }

    cout<<"Values are: ";

    //for output
    for(i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    
    cout<<endl;

    string s= "Hi This is Vidisha";
    cout<< s;

    return 0;
}