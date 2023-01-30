#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data =x;
        next=NULL;
    }
};
void myfunc(Node *head){ 
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
};
Node* insertAtStart(Node *head,int a){
    Node *temp=new Node(a);
    temp->next=head;
    return temp;
}

Node* insertAtEnd(Node *head,int a){
    Node *curr=head;
    Node *temp=new Node(a);
    if(head==NULL){
        return temp;
    }
    while(curr->next!=NULL){
        curr=curr->next;
    }
   curr->next=temp;
    return head;
}

Node* deleteStart(Node *head){
    if(head==NULL){
        return NULL;
    }
    return head->next;
}
Node* deleteEnd(Node *head){
    
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return NULL;
    }
    Node *curr=head;
    while(curr->next->next!=NULL){
       curr=curr->next;
    }
    curr->next=NULL;
    return head;
};

// int deleteatpos(Node *head,int x){
//     if(head==NULL){
//         return 0;
//     }
//     Node *temp=head;
//     while(x-1){
//         temp=temp->next;
//         x--;
//     }
//     // if(temp->next==NULL){
//     //     temp=NULL;
//     //     return head;
//     // }
//     return temp->data;
// }

Node* deleteatposi(Node *head,int x){
    if(head==NULL){
        return NULL;
    }
    if(x==1){
        return head->next;
    }
    Node *temp=head;
    while(x-2){
        temp=temp->next;
        x--;
    }
    if(temp->next->next==NULL){
        temp->next=NULL;
        return head;
    }
    else{
      temp->next=temp->next->next;
    }
    return head;
}

Node* deleteatposit(Node *head,int x){
    if(head==NULL){
        return NULL;
    }
    if(x==1){
        return head->next;
    }
    Node *temp=head;
    while(x-1){
        temp=temp->next;
        x--;
    }
    if(temp->next==NULL){
        // temp=NULL;
        cout<<temp->data;

        return head;
    }
    else{
      temp->next=temp->next->next;
    }
    return head;
}
int main(){
    Node *head=NULL;
    Node* temp1=new Node(123);
    head->next=temp1;
    // Node *temp2=new Node(43);
    // temp1->next=temp2;
    // head= insertAtStart(head,15);
    // head=insertAtEnd(head,23);
    // head=deleteStart(head);
    // head=deleteEnd(head);
    // int x=deleteatpos(head,5);
    // head=deleteatposi(head,1);
    // temp1=NULL;


    // head=deleteatposit(head,3);
    
    // cout<<x<<" "<<"sbds"<<endl;
   
    myfunc(head);
    //  cout<<head->data;
return 0;
}