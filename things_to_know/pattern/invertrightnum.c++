#include <bits/stdc++.h>
using namespace std;

void invertNum(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout <<j<<" ";
        }
        cout <<endl;
    }
}
int main(){
    int num;
    cout <<"Enter Number of lines: ";
    cin >>num;
    invertNum(num);
}