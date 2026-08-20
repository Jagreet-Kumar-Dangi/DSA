#include <bits/stdc++.h>
using namespace std;

int cnt(int arr[],int n,int tar){
    int hash[12]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    return hash[tar];
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int arr[n];
    cout <<"Enter elements in array: ";
    for(int i=0;i<n;i++)    cin >>arr[i];
    int tar;
    cout << "Enter target: ";
    cin >> tar;
    cout <<cnt(arr,n,tar);
    return 0;
}