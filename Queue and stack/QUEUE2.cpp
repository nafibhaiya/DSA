#include<iostream>
using namespace std;

struct node{
 int data;
 struct node* link;
};
node *front =NULL;
node *rear = NULL;

void enqueue(int value){
node *ptr = new node;
ptr-> data= value;
ptr->link = NULL;

if(front == NULL){
    front = ptr;
    rear= ptr;
}
else {
    rear -> link = ptr;
    rear = ptr;
}
}

void dequeue(){
if(front == rear){
    free(front);
    front = rear= NULL;
}
else {
    node *ptr= front;
    front = front->link;
    free(ptr);
}
}

void print(){
node *ptr=front;
while(ptr!=NULL)
{
    cout<<ptr->data<<"->";
    ptr=ptr->link;
}
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
   dequeue();
    print();

}
