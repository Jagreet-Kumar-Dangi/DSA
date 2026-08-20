#include <bits/stdc++.h>
using namespace std;
void insertion(int arr[],int s){
    for(int i=0;i<=s-1;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j-1],arr[j]);
            j--;
        }

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
    insertion(arr,n);
    for(auto i:arr)
        cout<<i<<" ";

    return 0;
}