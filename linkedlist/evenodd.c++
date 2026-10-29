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
// Node* EvenOdd(Node* head){
//     if(head ==nullptr || head->next==nullptr)
//         return head;
//     vector<int> arr;
//     Node* tempodd=head;
//     Node* tempeven=head->next;
//     while(tempodd != nullptr){
//         arr.push_back(tempodd->data);
//         if(tempodd->next != nullptr)
//             tempodd=tempodd->next->next;
//         else    break;
//     }
//     while(tempeven != nullptr){
//         arr.push_back(tempeven->data);
//         if(tempeven->next !=nullptr)
//             tempeven=tempeven->next->next;
//         else    break;
//     }
//     Node* temp=head;
//     int i=0;
//     while(temp !=nullptr){
//         temp->data=arr[i];
//         i++;
//         temp=temp->next;
//     }
//     return head;

// }
Node* EvenOdd(Node* head){
    if(head ==nullptr || head->next==nullptr)
        return head;
    Node* odd=head;
    Node* even=head->next;
    Node* evenhead=head->next;
    while(even !=nullptr && even !=nullptr){
        odd->next=odd->next->next;
        odd=odd->next;
        even->next=even->next->next;
        even=even->next;
        
    }
    odd->next=evenhead;
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
    Node* head=createLinked(arr);
    display(head);
    cout<<endl;
    Node* h=EvenOdd(head);
    display(h);
    return 0;
}