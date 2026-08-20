#include <bits/stdc++.h>
using namespace std;

void leftRotate1Place(int arr[],int n){
    int f=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=f;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

void bruteLeftRotateKPlaces(int arr[],int n,int k){
    int i=0;
    k=k%n;
    while(i<k){
        int temp=arr[0];
        for(int x=1;x<n;x++)
            arr[x-1]=arr[x];
        arr[n-1]=temp;
        i++;
    }
    for(int j=0;j<n;j++)
        cout<<arr[j]<<" ";
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin >>n;
    int arr[n];
    cout<<"Enter Elements in array: ";
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    // leftRotate1Place(arr,n);
    int k;
    cout<<"Enter how many places you want to left rotate: ";
    cin>>k;
    // bruteLeftRotateKPlaces(arr,n,k);
    return 0;
}