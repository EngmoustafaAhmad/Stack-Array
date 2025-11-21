#include <iostream>
using namespace std;

struct stacke{
int arr[100];
int top=-1;
void push(int value){
    if(top==99)return;
top++;
arr[top]=value;
}
void pop(){
if(isEmpty())return;
top--;
}
int print(){
    if(isEmpty())return -1;
    return arr[top];
}
bool isEmpty(){
if(top==-1)return true;
else return false;
}
int top_val(){
if(isEmpty())return -1;
else return arr[top];
}
};

int main()
{
    stacke stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
while(!stk.isEmpty()){
    cout<<stk.top_val()<<endl;
    stk.pop();
}

    return 0;
}
