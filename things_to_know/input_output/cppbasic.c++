#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter Your Age: ";
    int age;
    cin >>age;
    if(age<18)
        cout << "Not Eligible For Job.";
    else if(age<=54)
        cout <<"Eligible For Job.";
    else if(age<=57)
        cout << "Eligible For Job But Retiremnet soon.";
    else if(age>57)
        cout << "Retirement Soon";
    return 0;
}