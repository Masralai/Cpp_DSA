#include<iostream>
//#include<stack>
using namespace std;


class TwoStack{

    public:
    int* arr;
    int size;
    int top1;
    int top2;


    TwoStack(int size){
        this->size=size;
        
        top1=-1;
        top2 = size;
        arr = new int[size];
    }

    //push in stack 1
    void push(int num){
        if(top2-top1>1){
            top1++;
            arr[top1]=num; 
        }else{
            cout<<"stack overflow "<<endl;
        }
    }
    
    //push in stack 2
    void push(int num){
        if(top2-top1>1){
            top2--;
            arr[top2]=num; 
        }else{
            cout<<"stack overflow "<<endl;
        }
    }


    //pop from stack 1 and return popped element
    int pop1(){
        if(top1>=0){
            int ans = arr[top1];
            top1--;
            return ans;
        }else{
            return -1;
        }

    }

    //pop from stack 2 and return popped element
    int pop2(){
        if(top2<size){
            int ans = arr[top2];
            top2++;
            return ans;
        }else{
            return -1;
        }

    }



    // int peek(){
    //     if(top>=0){
    //         return arr[top];
    //     }else{
    //         cout<<"stack is empty"<<endl;
    //         return -1;
    //     }
    // }

    // bool isEmpty(){
    //     if(top==-1){
    //         return true;
    //     }else{
    //         return false;
    //     }
    // }

};




int main() {
































    // stack st(5);

    // st.push(22);
    // st.push(43);
    // st.push(44);
    // st.push(22);
    // st.push(43);
    // st.push(44);
    

    // cout<<st.peek()<<endl;

    // st.pop();
    // cout<<st.peek()<<endl;

    // st.pop();
    // cout<<st.peek()<<endl;

    // st.pop();
    // cout<<st.peek()<<endl;

    // if(st.isEmpty()){
    //     cout<<"stack is empty mere dost"<<endl;
    // }else{
    //     cout<<"stack is not empty mere dost"<<endl;
    // }


    return 0;
}