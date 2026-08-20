#include <bits/stdc++.h>
using namespace std;

void rev(int i,int arr[],int size){
    if(i>=size/2) return ;
    swap(arr[i],arr[size-1-i]);
    rev(i+1,arr,size);
}

bool check(string s,int i,int l){
    if(i>=l/2)  return true;
    if(s[i] !=s[l-i-1]) return false;
    return check(s,i+1,l);
}
int main(){
    // int n;
    // cout<<"Enter size of array: ";
    // cin>>n;
    // int arr[n];
    // cout << "Enter elements of array : "<<endl;
    // for(int i=0;i<n;i++)
    //     cin >> arr[i];
    // rev(0,arr,n);
    // for(int i=0;i<n;i++)
    //     cout<<arr[i]<<" ";
    string s;
    cout<< "Enter you string: ";
    cin >> s;
    cout <<boolalpha<<check(s,0,s.size());

    return 0;
}