#include<bits/stdc++.h>
using namespace std;

void a(int arr[], int n){
    arr[0]+=100;
    cout<< "Valur of array inside function: "<< arr[0]<< endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n=5;
    int arr[5] = {1,2,3,4,5};
    
    a(arr,n);

    cout<<"Value of array inside main: "<<arr[0]<<endl;
    
    return 0;
}