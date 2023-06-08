#include<iostream>
using namespace std;

struct Node
{
    int item;
    Node *next;
};
Node *head=nullptr;
//Node *last=nullptr;

int insertAtBeginning(int x)
{
    Node *new_node=new Node();
    new_node->item=x;
    new_node->next=head;
    head=new_node;
}
int insertAtEnd(int x)
{
    Node *new_node=new Node();
    Node *last_node=head,*prev;
    new_node->item=x;
    new_node->next=nullptr;
    if(head->next==nullptr)
    {
        head->next=new_node;
    }
    else
    {
        while(last_node->next!=nullptr)
        {
            last_node=last_node->next;
            ///i=i+1;
        }
        last_node->next=new_node;
    }
}
int insertAfter(Node *node,int x)
{
    Node *new_node=new Node();
    new_node->item=x;
    new_node->next=node->next;

    ///3 4 5;
    node->next=new_node;
}
int deleteAtHead()
{
    Node *delete_head=head;
    if(head==nullptr)
    {
        cout<<"Link List is Already Null.\n";
    }
    else
    {
        head=head->next;
        free(delete_head);
    }
}
int deleteAtLast()
{
    Node *delete_last=head,*prve;
    if(head->next==nullptr)
    {
        free(delete_last);
        head=nullptr;
    }
    else
    {
        while(delete_last->next!=nullptr)
        {
            prve=delete_last;
            delete_last=delete_last->next;
        }
        prve->next=nullptr;
        free(delete_last);
    }
}
int deleteItem(int x)
{
    Node *delete_item=head,*prev;
    if(delete_item->item==x)
    {
        head=delete_item->next;
        free(delete_item);
    }
    else
    {
        while(delete_item !=nullptr && delete_item->item != x )
        {
            prev=delete_item;
            delete_item=delete_item->next;
        }
        if(delete_item==nullptr)
        {

        }
        else
        {
            prev->next=delete_item->next;
        }
    }
}

void search_list(int key) {
   while(head) {
      if(head->item == key) {
         cout << "Found";
         return;
      }
      head = head->next;
   }
   cout << "NOt found";
}


void printLinkList(Node *node)
{
    cout<<"Print the List : ";

    if(node==nullptr)
    {
        cout<<" List is Empty.\n";
    }
    else
    {
        while(node !=nullptr)
        {
            cout<<node->item<<" ";
            node=node->next;
        }
    }
    cout<<endl<<endl;
}
int main()
{
    insertAtBeginning(5);
    insertAtBeginning(4);
    insertAtBeginning(3);
    printLinkList(head);
    insertAtEnd(8);
    insertAtEnd(9);
    insertAtEnd(10);
    printLinkList(head);
    insertAfter(head->next->next->next->next,11);
    insertAfter(head->next->next->next->next->next,12);
    printLinkList(head);
    deleteAtHead();
    deleteAtHead();
     printLinkList(head);
     deleteAtLast();
     printLinkList(head);
     deleteItem(9);
      search_list(8);

}
