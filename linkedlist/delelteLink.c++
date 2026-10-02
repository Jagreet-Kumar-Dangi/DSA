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

void deleteHead(Node*& head){
    if(head==nullptr)
        return;
    Node* temp=head;
    head=head->next;
    delete temp;
}

void deleteTail(Node*& head){
    if(head==nullptr)
        return;
    Node* temp=head;
    while(temp->next->next !=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;

}

void deleteAtPos(Node*& head,int pos){
    if(head==NULL){
        return;
    }
    if(pos==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return;
    }
    Node* temp=head;

    for(int i=1;i<pos-1 && temp !=nullptr;i++){
    
        temp=temp->next;
    }
    Node* cpy=temp->next;
    temp->next=cpy->next;
    delete cpy;

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
    int pos;
    cout<<"Enter position you wnat to delete: ";
    cin>>pos;
    // deleteHead(head);
    // deleteTail(head);
    deleteAtPos(head,pos);
    display(head);
    return 0;
}