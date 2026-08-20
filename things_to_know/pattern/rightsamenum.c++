#include <bits/stdc++.h>
using namespace std;
void samenum(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i<<" ";
        }
        cout <<endl;
    }
}
int main(){
    int num;
    cout <<"Enter the number of lines: ";
    cin >> num;
    samenum(num);
    return 0;
}