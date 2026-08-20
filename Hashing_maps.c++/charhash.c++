#include <bits/stdc++.h>
using namespace std;

int cnt(string s,char tar){
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    return hash[tar-'a'];
}
int main(){
    string s;
    cout<<"Enter the string: ";
    cin >> s;
    char tar;
    cout<<"Enter the target: ";
    cin >>tar;
    cout<<cnt(s,tar);
    return 0;
}