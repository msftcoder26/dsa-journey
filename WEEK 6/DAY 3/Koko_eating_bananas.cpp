 #include<bits/stdc++.h>
using namespace std;

long long totalHours(vector<int>& arr, int hourly){

    long long hours = 0;

    for(int i = 0; i < arr.size(); i++){

        hours += ceil((double)arr[i] / hourly);
    }
    return hours;
}

int kokoEatingBananas(vector<int>& arr, int h){

    int low = 1;

    int high = *max_element(arr.begin(), arr.end());

    while(low <= high){

        int mid = (low+high)/2;

        long long requiredHours = totalHours(arr, mid);

        if(requiredHours <= h){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}

int main(){

    vector<int> arr = {3,6,7,11};

    int h = 8;

    cout << kokoEatingBananas(arr, h);
}