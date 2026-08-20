#include <bits/stdc++.h>
using namespace std;

int betterLongestSubarray(vector <int> nums,int n,int k){
    map<long long,int> premap;
    int maxlen=0;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum +=nums[i];
        if(sum==k){
            maxlen =max(maxlen,i+1);
        }
        long long rem=sum-k;
        if(premap.find(rem)!=premap.end()){
            int len=i-premap[rem];
            maxlen=max(maxlen,len);
        }
        if(premap.find(rem)==premap.end())
            premap[sum]=i;
    }
    return maxlen;

}


int optimalLongestSubarray(vector <int> nums,int n,int k){
    int left=0,right=0;
    long long sum=0;
    int maxlen=0;
    while(right<n){
        sum +=nums[right];
        while(left<=right && sum>k){
            sum -=nums[left];
            left++;
        }
        if(sum==k){
            maxlen =max(maxlen,right-left+1);
        }
        right++;

    }
    return maxlen;
}
int main(){
    int n,k;
    cout <<"Enter size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)
        cin>>nums[i];
    cout<<"Enter target sum: ";
    cin>>k;
    // cout<<"Longest subarray sum: "<<betterLongestSubarray(nums,n,k);
    cout<<"Longest subarray sum: "<<optimalLongestSubarray(nums,n,k);
    
}