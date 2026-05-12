#include<bits/stdc++.h>
using namespace std;

int main() {
    //take day no. and print corresponding day fro 1- monday and so on
    int day;
    cout<<"enter day no. : ";
    cin >> day;

    switch(day){
        case 1:
        cout<<"monday";
        break;
    
        case 2:
        cout<<"tuesday";
        break;          

        case 3:
        cout<<"wednesday";
        break;  

        case 4:
        cout<<"thursday";
        break;

        case 5:
        cout<<"friday"; 
        break;  

        case 6:
        cout<<"saturday";
        break;

        case 7:
        cout<<"sunday";
        break;
    
        default:
        cout<<"invalid day";
    }    
    return 0;
}