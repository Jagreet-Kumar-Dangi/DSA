#include <bits/stdc++.h>
using namespace std;
void f(int i,int s){
    if(i<1){
        cout << s<<endl;
        return ;
    }
    f(--i,s+i);
}
int sumtillN(int n){
    if(n<1)
        return 0;
    return n + sumtillN(n-1);
}


int fact(int n){
    if(n==0) return 1;
    return n * fact(n-1);
}
int main(){
    int n;
    cout <<"Enter Number N: ";
    cin >> n;;
    // f(n,0);
    // cout <<"Sum: "<<sumtillN(n);
    cout << "Factorial Of N: "<<fact(n);
    return 0;
}