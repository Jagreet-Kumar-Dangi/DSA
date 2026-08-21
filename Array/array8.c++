#include <bits/stdc++.h>
using namespace std;

int kadaneAlgo(vector<int> &nums,int n){
    long long int sum=0;
    int maxi=LONG_MIN;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum>maxi)
            maxi=sum;
        if(sum<0)
            sum=0;
    }
    return maxi;
}
vector<int> kadaneAlgoSubArray(vector<int> &nums,int n){
    long long int sum=0;
    int maxi=LONG_MIN;
    int ansStart=-1,ansEnd=-1;
    int star=0;
    for(int i=0;i<n;i++){
        if(sum==0)
            star=i;
        sum+=nums[i];
        if(sum>maxi)
            maxi=sum;
            ansStart=star;
            ansEnd=i;
        if(sum<0)
            sum=0;
    }
    return {ansStart,ansEnd};
}



int main(){
    int n,k;
    cout <<"Enter size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)
        cin>>nums[i];
    // cout<<"Maximum Sum: "<<kadaneAlgo(nums,n);
    cout<<"Maximum Sum Subarray: "<<endl;
    vector<int> ans=kadaneAlgoSubArray(nums,n);
    cout<<ans[0]<<" "<<ans[1];

    return 0;
}