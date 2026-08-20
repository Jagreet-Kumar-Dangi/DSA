#include <bits/stdc++.h>
using namespace std;

void charTri(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << "  ";
        }
        for(int k=0;k<i;k++){
            cout <<char(65+k)<<" ";
        }
        for(char l='A';l<'A'+i-1;l++){
            cout <<l<<" ";
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