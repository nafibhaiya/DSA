#include<iostream>
using namespace std;
struct Node
{
    Node *prev;
    int item;
    Node *next;
};
Node *head=nullptr;

int insertAtBeginning(int x)
{
    Node* new_node=new Node();
    new_node->prev=nullptr;
    new_node->item=x;
    new_node->next=head;
    if(head !=nullptr)
    {
       head->prev=new_node;
    }
    head=new_node;
}

int insertAtEnd(int x)
{
    Node* new_node=new Node();
    Node* last=head;

    new_node->item=x;
    new_node->next=nullptr;

    if(head->next==nullptr)
    {
        new_node->prev=head;
        head->next=new_node;
    }
    else
    {
        while(last->next != nullptr)
        {
            last=last->next;
        }
        new_node->prev=last;
        last->next=new_node;
    }
}

int insertBefore(Node* node,int x)
{
    Node *new_node=new Node();

    Node* prevs=head;

    if(node==nullptr)
    {
        cout<<"Given address can't be null.\n";
    }
    else
    {
        while(prevs->next!=node)
        {
            prevs=prevs->next;
        }
        new_node->item=x;
        new_node->prev=prevs;
        new_node->next=prevs->next;
        prevs->next=new_node;
        new_node->prev=new_node;
    }
}

int insertAfter(Node* node,int x)
{
    Node *new_node=new Node();
    if(node==nullptr)
    {
        cout<<"Given address can't be null.\n";
    }
    else
    {
        new_node->item=x;
        new_node->prev=node;
        new_node->next=node->next;
        node->next=new_node;
        new_node->prev=new_node;
    }
}
void printLinkList(struct Node* node)
{
  while (node->next != NULL)
  {
    cout << node->item << " ";
    node = node->next;
  }
  cout << endl << endl;
}
int main()
{
    insertAtBeginning(0);
    insertAtBeginning(4);
    insertAtBeginning(3);
    insertAtBeginning(2);
    insertAtBeginning(1);
    printLinkList(head);

}
