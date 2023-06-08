#include<iostream>
using namespace std;
struct node{
 int data;
 struct node* link;
}*top =NULL;

void push (int data){
 struct node* newnode = new node;
if(newnode == NULL)cout<<"stack overflow";
 newnode -> data = data;
 newnode -> link = NULL;
 newnode -> link = top;
 top = newnode;
}

void pop(){
    if(top == NULL){cout<<"stack underflow";}
    struct node *temp =top;
    top = top -> link;
    free(temp);
    temp = NULL;
}
 void print (){
     struct node *ptr = top;
     while(ptr!= NULL){
         cout<<ptr-> data<<"->";
        ptr = ptr->link;
}}

int main(){

push(1);
push(2);
push(3);
push(4);
pop();
print();


}
