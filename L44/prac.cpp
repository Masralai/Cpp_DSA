#include<bits/stdc++.h>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
    
};


void insertAtHead(node* &head ,int d){
    node* temp = new node(d);
    temp->next = head;
    head=temp;

}

void insertAtTail(node* &tail , int d){
    node* temp = new node(d);
    tail->next = temp;
    tail=temp;
}

void print( node* & head ){
    node* temp = head ;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }cout<<endl;
}




int main() {
    

    node* node1= new node(10);
    
    node* head = node1;
    node* tail = node1;

    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);
    insertAtHead(head,60);

    //print(head);

    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    print(head);

    return 0;
}