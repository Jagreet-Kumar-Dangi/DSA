#include <bits/stdc++.h>
using namespace std;

int practice(int arr[],int s,int tar){
    map<int ,int > mpp;
    for(int i=0;i<s;i++)
        mpp[arr[i]]++;
    return mpp[arr[tar]];
}

int main(){
    int n;
    cout <<"Enter size of array: ";
    cin >>n;
    int arr[n];
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)    cin >>arr[i];
    int q;
    while(q>0){
        cout<<"Enter target: ";
        cin >>q;
        cout<<practice(arr,n,q)<<endl;

    }
    return 0;
}