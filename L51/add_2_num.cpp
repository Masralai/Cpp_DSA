//https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Node{
    
    public:
    T data;
    Node* next;

    Node(T data){
        this->data=data;
        this->next=NULL;
    }
};
Node<int>* reverse(Node<int>* head){

    if(head == NULL /*case of empty list*/|| head->next==NULL/*case of single node */){
        return head;
    }

    Node *prev = NULL;
    Node* curr = head;
    Node* forward=NULL;

    while(curr!=NULL){
        
        curr->next = prev;
        prev=curr;
        curr=forward;
    }

    return prev;

}

void insertAtTail(Node<int>* &head,Node<int>* &tail, int data){
    Node<int>* temp = new Node(data);
    if(head==NULL){//if list is empty
        head= temp;
        tail=temp;
        return;
    }else{//non empty list
        tail->next = temp;
        tail = temp;
    }

    
}

Node<int>* addNodes(Node<int>* first, Node*<int> second){
    int carry =0;

    Node<int>* ansHead = NULL;
    Node<int>* ansTail =NULL;

    while(first!=NULL && second!=NULL){
        int sum = carry + first->data + second->data;
        int digit = sum%10;
        //create node and add in ans LL
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        
        first = first->next;
        second = second ->next;
    }

    while(first!=NULL){
        int sum = carry + first->data;
        int digit = sum%10;
        //create node and add in ans LL
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;

        first = first->next;
    }

    while(second!=NULL){
        int sum = carry + second->data;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;

        second = second->next;
    }
    
    while(carry!=0){ //for the case when carry is left (ex- 99+990 = 1089)
        int sum = carry;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
    }
    return ansHead;

}

Node<int>* addTwoLists(Node<int>* num1, Node<int>* num2){
    //step1 - reverse input LL
    first = reverse(num1);
    second = reverse(num2);

    //step2 - add the nodes
    Node* ans = addNodes(first,second);

    //step3 -reverse
    ans = reverse(ans);
    
    return ans;
}

int main() {
    
    return 0;
}