#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if(n<=1) return n;
    int l= f(n-1);
    int sl=f(n-2);
    return l+sl;
}
int main(){
    int n;
    cout << "Enter the Number: ";
    cin >>n;
    cout << f(n);
    return 0;
}