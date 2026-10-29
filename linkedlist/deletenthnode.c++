#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    public:
        Node(int d){
            data=d;
            next=nullptr;
        }
        Node(int d,Node* n){
            data=d;
            next=n;
        }
};
Node* createLinked(vector<int> arr){
    if(arr.empty())
        return nullptr;
    Node* head=new Node(arr[0]);
    Node* temp=head;
    for(int i=1;i<arr.size();i++){
        temp->next=new Node(arr[i]);
        temp=temp->next;
    }
    return head;

}
Node* nthnode(Node* head,int n){
    int cnt=0;
    Node* temp=head;
    while(temp !=nullptr){
        cnt++;
        temp=temp->next;
    }
    int res=cnt-n;
    if(res<0){
        return head;
    }
    if(res==0)
        return head->next;
    Node* temp1=head;
    while(res-1){
        temp1=temp1->next;
        res--;
    }
    Node* del=temp1->next;
    temp1->next=temp1->next->next;
    delete del;
    return head;
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
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter the elements of linked list: ";
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int tar;
    cout<<"Enter target node from last: ";
    cin>>tar;
    Node* head=createLinked(arr);
    display(head);
    cout<<endl;
    Node* h=nthnode(head,tar);
    display(h);
    return 0;
}