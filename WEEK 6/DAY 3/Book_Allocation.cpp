#include<bits/stdc++.h>
using namespace std;

//helper code
/*If a student can read at most "pages",
how many students are required?*/
int countSt(vector<int>& arr, int barrier){

    int studentCount = 1;
    int currentStudentPages = 0;

    for(int i = 0; i < arr.size(); i++){

        if(currentStudentPages + arr[i] <=barrier){
            currentStudentPages += arr[i];
        }
        else{
            studentCount++;
            currentStudentPages = arr[i];
        }
    }
    return studentCount;
}

int bookAllocation(vector<int>& arr, int totalStudents){

    int totalBook = arr.size();

    if(totalStudents > totalBook){
        return -1;
    }

    int low = *max_element(arr.begin(), arr.end());

    int high = accumulate(arr.begin(), arr.end(), 0);

    while(low <= high){

        int mid = (low + high)/2;

        int requiredStudents = countSt(arr, mid);

        // Barrier too small
        if(requiredStudents > totalStudents){
            low = mid + 1;
        }

        // Barrier works
        else{
            high = mid - 1;
        }
    }
    return low;
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int totalStudents;
    cin >> totalStudents;

    cout << bookAllocation(arr, totalStudents);

    return 0;
}