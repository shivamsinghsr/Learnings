#include<iostream>
using namespace std;
class Stack{
    int capacity;
    int *arr;
    int top;
    public:
    Stack(int c){
        this->capacity=c;
        arr=new int[c];
        this->top=-1;
    }
 void pop(){
    if(this->top==-1){
        cout<<"Underflow"<<endl;
        return ;
    }
    this->top--;
 }
  void push(int val){
    if(top==capacity-1){
       cout<<"Overflow"<<endl;
       return ;
    }
    top++;
    arr[top]=val;
}

 int gettop(){
    if(this->top==-1){
        cout<<"underflow"<<endl;
        return INT_MIN;;
    }
    return this->arr[this->top];
}
};
int main(){
Stack st(10);
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
cout<<st.gettop()<<"\n";
st.push(6);
st.push(7);
st.pop();
cout<<st.gettop()<<"\n";
return 0;
}