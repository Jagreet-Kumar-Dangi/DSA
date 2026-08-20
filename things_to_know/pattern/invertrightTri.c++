#include <bits/stdc++.h>
using namespace std;

void invertTri(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout <<"* ";
        }
        cout <<endl;
    }
}
int main(){
    int num;
    cout <<"Enter Number of lines: ";
    cin >>num;
    invertTri(num);
}