#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(i<=high-1 && arr[i]<=pivot)
            i++;
        while(j>=low+1 && arr[j]>pivot)
            j--;
        if(i<j)
            swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void quick(int arr[],int low,int high){
    if(low<high){
        int pref=partition(arr,low,high);
        quick(arr,low,pref-1);
        quick(arr,pref+1,high);
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >>n;
    cout<<"Enter the element in array: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick(arr,0,n-1);
    for(auto i:arr)
        cout<<i<<" ";
    return 0;
}