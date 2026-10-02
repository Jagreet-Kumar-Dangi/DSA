#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin >>n;
    char m='A';
    int num=1;
    int check=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
            cout<<"  ";
        for(int x=n-i;x>0;x--){
            if(check){
                cout<<m<<" ";
                if(m=='Z' ||m=='z')
                    m='A';
                if(m>='A' && m<='Z'){
                    m=m-'A'+'a';
                    m +=1;
                }else{
                    m=m-'a'+'A';
                    m +=1;
                }
                check=false;
            }else{
                cout<<num++<<" ";
                check=true;
            }

        }
        cout<<endl;
    }
}