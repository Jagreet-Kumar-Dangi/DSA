#include <bits/stdc++.h>
using namespace std;

void tri(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout <<"* ";
        }
        cout <<endl;
    }
}
int main(){
    int num;
    cout << "Enter the numeber of lines: ";
    cin  >> num;
    tri(num);
    return 0;
}