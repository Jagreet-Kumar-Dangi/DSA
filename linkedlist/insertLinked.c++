#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    public:
        Node(int val){
            data=val;
            next=nullptr;
        }
        Node(int val,Node* next1){
            data=val;
            next=next1;
        }
};

Node* converToLink(int arr[],int n){
    if(n==0)
        return nullptr;
    Node* head=new Node(arr[0]);
    Node* mover=head;
    
    for(int i=1;i<n;i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void insertHead(Node*& head,int val){
    if(head==nullptr)
        return;
    Node* temp=new Node(val,head);
    head=temp;
}

void insertTail(Node*& head,int val){
    if(head==nullptr)
        return;
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node* t=new Node(val);
    temp->next=t;
}

void insertAtPos(Node*& head,int val,int pos){
    if(head==NULL){
        return;
    }
    if(pos==1){
        Node* head=new Node(val,head);
        return;
    }
    Node* temp=head;

    for(int i=1;i<pos-1 && temp !=nullptr;i++){
    
        temp=temp->next;
    }
    if(temp==nullptr)
        return;
    Node* t=new Node(val,temp->next);
    temp->next=t;
    

}
void display(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    cout<<"Enter number of ele: ";
    int n;
    cin>>n; 
    int arr[n];
    cout<<"Enter elements in linked list: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head=converToLink(arr,n);
    int pos,val;
    cout<<"Enter position you wnat to insert: ";
    cin>>pos;
    cout<<"Enter value you want to insert: ";
    cin>>val;
    // insertHead(head,val);
    // insertTail(head,val);
    insertAtPos(head,val,pos);
    display(head);
    return 0;
}