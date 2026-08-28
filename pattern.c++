#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin >>n;
    int m=0;
    bool flag=true;
    for(int i=0;i<n;i++){
        for(int j=n-i;j<n;j++)
            cout<<"  ";
        for(int z=i;z<n;z++){
            if(m==26)
                m=0;
            if(flag){
                cout<<char(m+65)<<" ";
                flag=false;
                m++;
            }else{
                cout<<char(m+97)<<" ";
                flag=true;
                m++;
            }
        }
        cout<<endl;
    }
}