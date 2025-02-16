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

    ~node(){
        int value = this->data;

        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }



    }
    

};

void print(node* & head){
    node*temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

void insertAtTail( node* & tail, int d){
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;


}

void insertAtHead(node* & head, int d){
    node *temp = new node(d);
    temp->next=head;
    head= temp;
    
}


void insertAtPosition(node* & head, node* &tail, int position, int d){
    if(position==1){
        insertAtHead(head, d);
        return;
    }

    node* temp= head;
    int cnt= 1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;

    }

    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    node* nodeToInsert = new node(d);

    nodeToInsert->next=temp->next;
    temp->next = nodeToInsert;


}

int main() {

    

    node * node1 =new node(10);
    node* head = node1;
    node*tail=node1;
    
    print(head);

    insertAtTail(tail,20);
    print(head);

    insertAtTail(tail,30);
    print(head);

    insertAtTail(tail,40);
    print(head);

    insertAtTail(tail,50);
    print(head);

    insertAtHead(head,8);
    print(head);
    insertAtHead(head,6);
    print(head);
    insertAtHead(head,4);
    print(head);
    insertAtHead(head,2);
    print(head);
    insertAtHead(head,0);
    print(head);

    
    return 0;
}