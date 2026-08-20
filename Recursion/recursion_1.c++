#include <bits/stdc++.h>
using namespace std;


int cnt=0;
void f(){
    cnt++;
    if(cnt==4)
        return ;
    cout <<cnt<<endl;
    f();
}
int main(){
    f();
    return 0;
}