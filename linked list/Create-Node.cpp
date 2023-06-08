#include<iostream>

using namespace std;

struct Node
{
int data;
Node* next;
};

Node *create_node(int item, Node *next)
{
    Node *new_node = (Node*) malloc(sizeof(Node));
    if(new_node == NULL)
    {
        cout<<"Could not Create A New Node!!";
        exit(1);
    }

    new_node -> data = item;
    new_node -> next = next;

    return new_node;
}

int main()
{
    Node *n;
    n = create_node(10, NULL);
    cout<<n -> data;

}
