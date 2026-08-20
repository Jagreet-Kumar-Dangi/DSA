#include <bits/stdc++.h>
using namespace std;

void square(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cout <<"* ";
        }
        cout <<endl;
    }
}
int main(){
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    square(n);
    return 0;
}