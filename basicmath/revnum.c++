#include <bits/stdc++.h>
using namespace std;
int rev(int n){
    int r=0;
    while(n>0){
        int mod=n%10;
        r = (r*10)+mod;
        n /=10;
    }
    return r;
}
int main(){
    int num;
    cout <<"Enter Your Number: ";
    cin >>num;
    cout <<"Reverse of number is: "<<rev(num);
    return 0;
}