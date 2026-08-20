#include <bits/stdc++.h>
using namespace std;
void bubble(int arr[],int s){
    bool flag=false;
    for(int i=0;i<s-1;i++){
        for(int j=0;j<s-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
        }}
        if(flag==false)
            break;
    }
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    bubble(arr,n);
    for(auto i:arr)
        cout<<i<<" ";

    return 0;
}