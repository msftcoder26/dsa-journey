#include<bits/stdc++.h>
using namespace std;

int main() {
   int age;
   cout<<"enter age: ";
   cin>> age;
   cout<<"Your age is:" << age<<endl;
//    if (age>18){ // if condition is ture for age =65 so the senior citizen line is not executed and it only shows you can vote
//     cout<<"you can vote";
//    }
//    else if(age>60){
//     cout<<"you are senior citizen";
//    }
//    else {
//     cout<< "you can't vote";
//    }
if (age>60){
    cout<<"you are senior citizen";
}
else if(age>=18 && age<=60){
    cout<<"you are adult";
}
else{
    cout<< "you are kid";
}
    return 0;
}