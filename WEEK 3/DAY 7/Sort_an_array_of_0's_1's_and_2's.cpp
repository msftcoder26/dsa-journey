#include<bits/stdc++.h>
using namespace std;

//brute(sorting)
void sortArray(int arr[], int n){

    sort(arr, arr+n);
}

//better(counting 0's,1's,2's)
void sortArray(int a[], int n){

    int cnt0=0;
    int cnt1=0;
    int cnt2=0;

    for(int i=0;i<n;i++){
        if(a[i]==0){
            cnt0++;
        }
        else if (a[i]==1){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }

    for(int i=0;i<cnt0;i++){
        a[i]=0;
    }
    for(int i=cnt0; i< (cnt0+cnt1); i++){
        a[i]=1;
    }
    for(int i= (cnt0+cnt1); i<n; i++){
        a[i]=2;
    }

}

//optimal(dutch flag algo)
void sortArray(int arr[], int n){

    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid <= high){

        if(arr[mid] == 0){

            swap(arr[low], arr[mid]);

            low++;
            mid++;
        }

        else if(arr[mid] == 1){

            mid++;
        }

        else{

            swap(arr[mid], arr[high]);

            high--;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){

        cin >> arr[i];
    }

    sortArray(arr,n);

    for(int i=0; i<n; i++){

        cout << arr[i] << " ";
    }

    return 0;
}