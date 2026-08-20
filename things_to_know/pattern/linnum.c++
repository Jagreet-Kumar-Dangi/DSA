#include <bits/stdc++.h>
using namespace std;

void linNum(int n){
    int s=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout <<s<<" ";
            s++;
        }
        cout << endl;
    }
}
int main(){
    int num;
    cout <<"Enter Number of lines: ";
    cin >>num;
    linNum(num);
}