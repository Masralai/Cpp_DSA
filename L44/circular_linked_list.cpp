#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;


    Node(int d){
        this->data = d;
        this->next=NULL;

    }

    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<" memory is free for node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail, int element, int d){

    //empty list
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail= newNode;
        newNode->next = newNode;

    }
    else{
        //non empty list
        //assuming that the element is present in the list

        Node* curr = tail;

        while(curr->data!=element){
            curr = curr->next;
        }

        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp-> next = curr->next;
        curr->next=temp;
    }
}


void print(Node* tail){
    Node* temp=tail;

    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail!=temp);
    cout<<endl;



    // cout<<tail->data<<" ";
    // while(tail->next !=temp){//this condition cant print single node
    //     cout<<tail->data<<" ";
    //     tail = tail->next;
    // }cout<<" ";
}






int main() {

    Node* tail=NULL;

    //empty list mein insert karre hai
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

    insertNode(tail,5,6);
    print(tail);

    insertNode(tail,9,10);
    print(tail);
    
    insertNode(tail,3,4);
    print(tail);


    return 0;
}