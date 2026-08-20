#include <bits/stdc++.h>
using namespace std;
bool arm(int n,int cnt){
    int org=n;
    int s=0;
    while(n>0){
        int m=n%10;
        // int t=1;
        // for(int i=1;i<=cnt;i++){
        //     t *=m;
        // }
        // s +=t;
        s +=pow(m,cnt);
        n /=10;
    }
    return org==s;
}
int main(){
    int n;
    cout <<"Enter your number: ";
    cin >> n;
    int c=(int)(log10(n)+1);
    cout <<"Number is Armstrong: "<<boolalpha<<arm(n,c);

    return 0;
}