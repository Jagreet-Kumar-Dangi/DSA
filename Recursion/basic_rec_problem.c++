#include <bits/stdc++.h>
using namespace std;
int cnt=1;
void nto1(int n){
    if(n>=1)
        cout<<n<<endl;
    else
        return;
    nto1(--n);
}
void backtrack(int i,int n){
    if(i<=1)
        return ;
    backtrack(++i,n);
    cout<<i<<" ";
}
void name(){
    if(cnt<=3)
        cout<<"Jagreet Kumar Dangi"<<endl;
    else
        return ;
    cnt++;
    name();
    }

int main(){
    // name();
    cout<<"Enter N: ";
    int n;
    cin >>n;
    backtrack(1,n);
    return 0;
}