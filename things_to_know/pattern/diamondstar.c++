#include <bits/stdc++.h>
using namespace std;

void squareDia(int n){
    int sp=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++)
            cout<<"* ";
        for(int l=0;l<sp;l ++)
            cout << "  ";
        for(int m=1;m<=n-i;m++)
            cout << "* ";
        sp +=2;
        cout << endl;
    }
    sp=8;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<"* ";
        for(int l=0;l<sp;l ++)
            cout << "  ";
        for(int m=1;m<=i;m++)
            cout << "* ";
        sp -=2;
        cout << endl;
    }
}
int main(){
    int num;
    cout <<"Enter Number of lines: ";
    cin >>num;
    squareDia(num);
}