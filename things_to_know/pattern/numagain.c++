#include <bits/stdc++.h>
using namespace std;

void numAgain(int n){
    int s=1;
    for(int i=1;i<=n;i++){
        if(i%2 !=0)
            s=1;
        else s=0;
        for(int j=1;j<i+1;j++){
            cout << s<<" ";
            s=1-s;
        }
        cout <<endl;
     
    }
}
int main(){
    int num;
    cout <<"Enter Number of lines: ";
    cin >>num;
    numAgain(num);
}