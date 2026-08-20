#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot=arr[0];
    int i=low;
    int j=high;
    while(i<j){
        while(i<=high-1 && arr[i]<=pivot)
            i++;
        while(j>=low-1 && arr[j]>pivot)
            j--;
        if(i<j)
            swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(int arr[],int low,int high){
    if(low<high){
        int part=partition(arr,low,high);
        quickSort(arr,low,part-1);
        quickSort(arr,part+1,high);
    }
}

int bruteLargest(int arr[],int s){
    return arr[s-1];
}

int optimalLargest(int arr[],int s){
    int lar=arr[0];
    for(int i=1;i<s;i++)
        if(arr[i]>lar)
            lar=arr[i];
    return lar;
}

int optimalSecondLargest(int arr[],int n){
    int lar=arr[0];
    int slar=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>lar){
            slar=lar;
            lar=arr[i];
        }else if(arr[i]>slar && arr[i] !=lar)
            slar=arr[i];
    }
    return slar;
}

bool checkSorted(int arr[],int n){
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=false;
            break;
        }
    }
    return flag;
}

void removeDuplicate(int arr[],int n){
    int j=1;
    int i=0;
    while(j<n){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
        j++;
    }
    for(int x=0;x<=i;x++){
        cout<<arr[x]<<" ";
    }
    
}
int main(){
    int n;
    cout <<"Enter size of array: ";
    cin >>n;
    int arr[n];
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    // quickSort(arr,0,n-1);
    // cout<<"Largest Number in array: "<<optimalLargest(arr,n);
    // cout<<"Second largest Number in array: "<<optimalSecondLargest(arr,n);
    // cout<<boolalpha<<checkSorted(arr,n);
    removeDuplicate(arr,n);
    return 0;
}