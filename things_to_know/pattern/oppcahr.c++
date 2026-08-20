#include <bits/stdc++.h>
using namespace std;

void charTri(int n){
    int s=n;
    for(int i=0;i<n;i++){
        for(int j=n-i;j<=n;j++){
            cout << char(64+j)<<" ";
        }
        cout <<endl;
    }
}
int main(){
    int num;
    cout <<"Enter Number of lines: ";
    cin >>num;
    charTri(num);
}