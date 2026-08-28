#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr,int target){
    int n=arr.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target)
            return mid;
        else if(target>arr[mid])
            low =mid+1;
        else
            high=mid-1;
    }
    return -1;
}

int main(){
    int n,k;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target";
    cin>>k;
    int res=binarySearch(arr,k);
    cout<<"Index is: "<<res;
    return 0;
}

int cnt=1;
int l=0;
for(int i=0;i<n-1;i++){
    if(nums[i]+1==nums[i+1]){
        cnt++;
    else if(num[i]==nums[i+1])
        cnt++;

    }else{
        l=max(l,cnt)
        cnt=1;
    }
}