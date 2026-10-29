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
// Node* sorting(Node* head){
//     if(head==nullptr)
//         return nullptr;
//     Node* temp=head;
//     int cnt0=0,cnt1=0,cnt2=0;
//     while(temp !=nullptr){
//         if(temp->data==0)
//             cnt0++;
//         else if(temp->data==1)
//             cnt1++;
//         else
//             cnt2++;
//         temp=temp->next;
//     }
//     Node* temp1=head;
//     while(temp1 !=nullptr){
//         if(cnt0){
//             temp1->data=0;
//             cnt0--;
//         }
//         else if(cnt1){
//             temp1->data=1;
//             cnt1--;
//         }
//         else{
//             temp1->data=2;
//             cnt2--;
//         }
//         temp1=temp1->next;
//     }
//     return head;

// }
Node* sorting(Node* head){
    if(head==nullptr)
        return nullptr;
    Node* zerohead=new Node(-1);
    Node* zero=zerohead;
    Node* onehead=new Node(-1);
    Node* one=onehead;
    Node* twohead=new Node(-1);
    Node* two=twohead;

    Node* temp=head;
    while(temp !=nullptr){
        if(temp->data==0){
            zero->next=temp;
            zero=zero->next;
        }
        else if(temp->data==1){
            one->next=temp;
            one=one->next;
        }else{
            two->next=temp;
            two=two->next;
        }
        temp=temp->next;
    }
    two->next=nullptr;
    one->next=twohead->next;
    if(onehead->next !=nullptr)
        zero->next=onehead->next;
    else
        zero->next=twohead->next;

    return zerohead->next;


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
    Node* head=createLinked(arr);
    display(head);
    cout<<endl;
    Node* h=sorting(head);
    display(h);
    return 0;
}