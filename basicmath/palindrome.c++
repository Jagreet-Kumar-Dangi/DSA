#include <bits/stdc++.h>
using namespace std;
bool palin(int n){
    int r=0;
    int org=n;
    while(n>0){
        int mod=n%10;
        r = (r*10)+mod;
        n /=10;
    }
    return org==r;
}
int main(){
    int num;
    cout <<"Enter Your Number: ";
    cin >>num;
    cout <<"Number is Palindrome: "<<boolalpha<<palin(num);
    return 0;
}