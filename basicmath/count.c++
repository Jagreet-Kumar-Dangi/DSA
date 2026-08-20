#include <bits/stdc++.h>
using namespace std;
vector<int> count(int n){
    int n1=n;
    int cnt=0;
    while(n>0){
        int mod=n%10;
        n /=10;
        cnt++;
    }
    vector<int> arr(cnt);
    int i=0;
    while(n1>0){
        int m=n1%10;
        arr[i]=m;
        n1 /=10;
        i++;
    }
    return arr;
}
int main(){
    int num;
    cout <<"Enter the number: ";
    cin >>num;
    vector<int> dig=count(num);
    int c=(int)(log10(num)+1);
    cout <<c<<endl;
    for(int x:dig)
        cout <<x<<" ";
    return 0;
}