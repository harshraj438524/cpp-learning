#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
	Node *prev;
    Node(int x){
        data =x;
        next=NULL;
		prev=NULL;
    }
};
void printList(Node* head){
	while(head!=NULL){
       cout<<head->data<<endl;
	   head=head->next;
	}
}

Node *insertAtStart(Node* head,int x){
	if(head==NULL){
		return new Node(x);
	}
   Node *temp=new Node(x);
   temp->next=head;
   head->prev=temp;
   return temp;
}
int main(){
	Node* head=new Node(12);
	Node* temp1=new Node(13);
	Node* temp2=new Node(14);
	// Node* temp3=new Node(15);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
   
	head=insertAtStart(head,6);

	 printList(head);



return 0;
}