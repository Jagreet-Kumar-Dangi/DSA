#include <bits/stdc++.h>
using namespace std;
void mergeSort(int arr[],int low,int mid,int high){
    int ar[high-low+1];
    int left=low;
    int right=mid+1;
    int i=0;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            ar[i]=arr[left];
            i++;
            left++;
        }else{
            ar[i]=arr[right];
            i++;
            right++;
        }
    }
    while(left<=mid){
        ar[i]=arr[left];
        i++;
        left++;
    }
    while(right<=high){
        ar[i]=arr[right];
        i++;
        right++;
    }
    for(int z=low;z<=high;z++){
        arr[z]=ar[z-low];
    }
}
void merge(int arr[],int low,int high){
    if(low>=high)   return ;
    int mid=low+(high-low)/2;
    merge(arr,low,mid);
    merge(arr,mid+1,high);
    mergeSort(arr,low,mid,high);
}
int main(){
    int n;
    cout << "Enter size of array: ";
    cin >>n;
    cout<<"Enter elements of array: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    merge(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}