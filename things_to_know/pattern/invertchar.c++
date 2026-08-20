#include <bits/stdc++.h>
using namespace std;

void charTri(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout <<char(65+j);
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