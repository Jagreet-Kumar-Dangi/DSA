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

void bruteUni(int arr1[],int arr2[],int n1,int n2){
    set<int> s1;
    for(int i=0;i<n1;i++){
        s1.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        s1.insert(arr2[i]);
    }
    int arr3[n1+n2];
    int z=0;
    for(auto i:s1){
       arr3[z]=i;
        z++;
    }
}

int main(){
    int n1,n2;
    cout<<"Enter size of array1: ";
    cin >>n1;
    cout<<"Enter size of array2: ";
    cin>>n2;
    int arr1[n1],arr2[n2];
    cout<<"Enter Elements in array1: ";
    for(int i=0;i<n1;i++){
        cin >>arr1[i];
    }
    cout<<"Enter Elements in array2: ";
    for(int i=0;i<n2;i++){
        cin >>arr2[i];
    }
    bruteUni(arr1,arr2,n1,n2);
   
    return 0;
}