#include <bits/stdc++.h>
using namespace std;

void twoTri(int n){
    int sp=(n*2)-2;
    int en=1;
    for(int i=1;i<=n*2-1;i++){
        if(i<=(n*2)/2){
            for(int j=0;j<i;j++)
                cout <<"* ";
            for(int k=sp;k>0;k--)
               cout <<"  ";
                
            for(int j=0;j<i;j++)
                cout <<"* ";
            sp -=2;
        }else{
            
        }
        cout << endl;
    }
}
int main(){
    int num;
    cout <<"Enter Number of lines: ";
    cin >>num;
    twoTri(num);
}