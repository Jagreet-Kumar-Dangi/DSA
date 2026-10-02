#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    public:
    Node(int val,Node* next1){
        data=val;
        next=next1;
    }
    Node(int val){
        data=val;
        next=nullptr;
    }
};

Node* convertArrtoLink(int arr[]){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<5;i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}
int main(){
    int arr[5]={1,2,3,4,5};
    Node* head=convertArrtoLink(arr);
    Node* temp=head;
    while(temp !=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}