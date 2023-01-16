#include <bits/stdc++.h> 
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int data){
       this-> data=data;
       this-> next=NULL;
    }
};

void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }

}
int main() {
    node* node1=new node(4);
    node* node2=new node(5);
    node1->next=node2;
    print(node1);
    
    
	
    return 0;
}
		