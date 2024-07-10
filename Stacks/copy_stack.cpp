#include<iostream>
#include<stack>
using namespace std;
stack<int> copyStack(stack<int> &input){
    stack<int> temp;
    while(! input.empty()){
        int curr=input.top();
        input.pop();
        temp.push(curr);
    }
    stack<int> result;
    while(!temp.empty()){
        int curr=temp.top();
        temp.pop();
        result.push(curr);

    }
    return result;
}
int main(){
stack<int> input;
input.push(1);
input.push(2);
input.push(3);
input.push(4);
stack<int> result=copyStack(input);
while(!result.empty()){ // this is teprior method to print the stack in stl library
    int curr=result.top();
    result.pop();
    cout<<curr<<"\n";
}
return 0;
}
