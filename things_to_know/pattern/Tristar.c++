#include <bits/stdc++.h>
using namespace std;

void triStar(int n){
    for(int i=0;i<n;i++){
        for(int x=0;x<n-i-1;x++){
            cout <<"  ";
        }
        for(int j=0;j<2*i+1;j++){
            cout << "* ";
        }
        for(int x=0;x<n-i-1;x++){
            cout <<"  ";
        }
        cout<<endl;
    }
}
int main(){
    int num;
    cout <<"Enter Number of lines: ";
    cin >>num;
    triStar(num);
}