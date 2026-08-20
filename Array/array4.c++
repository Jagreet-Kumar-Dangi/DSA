#include <bits/stdc++.h>
using namespace std;

int missingElement(int arr[],int n){
    int has[n+1]={0};
    for(int i=0;i<n;i++){
        has[arr[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(has[i]==0)
            return i;
    }
    return 0;
}

int optimalMissingElement(int arr[],int n){
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n-1;i++){
        xor1 ^=arr[i];
        xor2 ^=i+1;
    }
    xor2 ^=n;
    return xor1^xor2;
}

int maxOnes(int arr[],int n){
    int cnt=0;
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1)
            cnt++;
        else
            cnt=0;
        if(cnt>max)
            max=cnt;
    }
    return max;
}

int appearOnes(int arr[],int n){
    int x1=0;
    for(int i=0;i<n;i++){
        x1 ^= arr[i];
    }
    return x1;

}
int main(){
    int n;
    cout <<"Enter size of array: ";
    cin >> n;
    int arr[n];
    cout <<"Enter elements in array: ";
    for(int i=0;i<n;i++)
        cin >>arr[i];
    // cout<<"Mising element: "<<missingElement(arr,n);
    // cout<<"Mising element: "<<optimalMissingElement(arr,n);
    // cout<<"Maximum Ones: "<<maxOnes(arr,n);
    cout<<"Single ELement in array: "<<appearOnes(arr,n);
    return 0;
}