#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data=data;
        next=NULL;
    }

};
class Stack{
    Node * head;
    int capacity;
    int currsize;
    public:
    Stack(int c){
        this->capacity=c;
        this->currsize=0;
        this->head=NULL;
    }
    bool isEmpty(){
        return this->head=NULL;
    }
    bool isFull(){
        return this->currsize=this->capacity;
    }
    void push(int data){
        if(this->currsize==this->capacity){
            cout<<"Overflow\n";
            return;
        }
        Node *new_node=new Node(data);
        new_node->next=head;
        head=new_node;
        this->currsize++;

    }
    int getTop(){
        if(head==NULL){
            cout<<"Underflow"<<endl;
            return -1;
        }
        return head->data;
    }
    void pop(){
        if(head==NULL){
            cout<<"Underflow";
            return;
        }
        
    }
};
int main(){
Stack st(4);
st.push(1);
st.push(5);
cout<<st.getTop()<<endl;
return 0;
}