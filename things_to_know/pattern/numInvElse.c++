#include <bits/stdc++.h>
using namespace std;

void rightLeft(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<i+1;j++)
            cout <<j<<" ";
        for(int k=1;k<=(2*n)-(2*i);k++)
            cout<<"  ";
        for(int l=i;l>=1;l--)
            cout <<l<<" "; 
        cout << endl;
    }
}
int main(){
    int num;
    cout <<"Enter Number of lines: ";
    cin >>num;
    rightLeft(num);
}