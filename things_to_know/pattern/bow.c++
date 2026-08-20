#include <bits/stdc++.h>
using namespace std;

void bow(int n){
    for(int i=1;i<=2*n-1;i++){
        if(i<=n){
            for(int j=1;j<i+1;j++){
                cout << "* ";
            }
        }else{
            for(int x=(2*n)-i;x>=1;x--){
                cout <<"* ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int num;
    cout <<"Enter Number of lines: ";
    cin >>num;
    bow(num);
}