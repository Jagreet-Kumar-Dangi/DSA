#include <bits/stdc++.h>
using namespace std;

void rightnum(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout <<j<<" ";;
        }
        cout <<endl;
    }
}

int main(){
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    rightnum(n);
    return 0;
}