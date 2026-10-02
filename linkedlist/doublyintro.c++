#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

    public:
        Node(int val){
            data=val;
            next=nullptr;
            prev=nullptr;
        }
        Node(int val,Node* prev1,Node* next1){
            data=val;
            prev=prev1;
            next=next1;
        }
};

Node* createLinked(int arr[],int n){
    if(n==0)
        return nullptr;
    Node* head=new Node(arr[0]);
    Node* back=head;
    for(int i=1;i<n;i++){
        Node* temp=new Node(arr[i],back,nullptr);
        back->next=temp;
        back=back->next;

    }
    return head;
}

void display(Node* head){
    Node* temp=head;
    while(temp !=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int n;
    cout<<"Enter number of ele: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in linked: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head=createLinked(arr,n);
    display(head);

    return 0;
}