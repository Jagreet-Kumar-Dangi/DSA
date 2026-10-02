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
    Node* head =new Node(arr[0]);
    Node* back=head;
    for(int i=1;i<n;i++){
        Node* temp=new Node(arr[i],back,nullptr);
        back->next=temp;
        back=back->next;
    }
    return head;
}

void deleteHead(Node*& head){
    Node* temp=head;
    head=head->next;
    head->prev=nullptr;
    delete temp;
}

void deleteTail(Node*& head){
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node* back=temp->prev;
    back->next=nullptr;
  
    delete temp;

}
void display(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    int n;
    cout<<"Enter numbers of ele: ";
    cin>>n;
    cout<<"Enter elements in array: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head=createLinked(arr,n);
    deleteHead(head);
    deleteTail(head);
    display(head);
}