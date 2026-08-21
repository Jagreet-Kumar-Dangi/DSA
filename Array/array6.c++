#include <bits/stdc++.h>
using namespace std;

void sort0_1_2(vector<int>& nums,int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }else if(nums[mid]==1){
            mid++;
        }else if(nums[mid]==2){
            swap(nums[mid],nums[high]);
            high--;
        }
    }
    
}

int main(){
    int n,k;
    cout <<"Enter size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)
        cin>>nums[i];
    sort0_1_2(nums,n);
    for(int i=0;i<n;i++)
        cout<<nums[i]<<" ";
    return 0;
}