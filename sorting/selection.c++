#include <bits/stdc++.h>
using namespace std;
void sort(int arr[],int s){
    for(int i=0;i<=s-1;i++){
        int mini=i;
        for(int j=i;j<=s-1;j++){
            if(arr[j]<arr[mini])
                mini=j;
        }
        swap(arr[i],arr[mini]);
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
    sort(arr,n);
    for(auto i:arr)
        cout<<i<<" ";

    return 0;
}