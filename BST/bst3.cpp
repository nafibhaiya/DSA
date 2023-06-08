#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *lptr;
    Node *rptr;
    Node()
    {
        lptr=NULL;
        rptr=NULL;
    }
    Node(int val)
    {
        data=val;
        lptr=NULL;
        rptr=NULL;
    }
};

Node *insertBST(Node *root,int val)
{
    if(root==NULL)
    {
        return new Node(val);
    }
    if(val==root->data)
    {
        cout<<" Data can't be same!"<<endl;
    }
    else if(val<root->data)
    {
        root->lptr=insertBST(root->lptr,val);
    }
    else
    {
        root->rptr=insertBST(root->rptr,val);
    }
    return root;
}
void inorder(Node *tptr)
{
    if(tptr==NULL)
    {
        return;
    }
    inorder(tptr->lptr);
    cout<<tptr->data<<" ";
    inorder(tptr->rptr);
}
void preorder(Node *tptr)
{
    if(tptr==NULL)
    {
        return;
    }
    cout<<tptr->data<<" ";
    preorder(tptr->lptr);
    preorder(tptr->rptr);
}
void postorder(Node *tptr)
{
    if(tptr==NULL)
    {
        return;
    }
    postorder(tptr->lptr);
    postorder(tptr->rptr);
    cout<<tptr->data<<" ";
}
Node *searchBST(Node *root,int val)
{
    if(root==NULL)
    {
        return NULL;
    }

    if(root->data==val)
    {
        return root;
    }
    if(root->data > val)
    {
        return searchBST(root->lptr,val);
    }
    return searchBST(root->rptr,val);
}
Node *Inorder(Node *root)
{
    Node *curr=root;
    while(curr && curr->lptr !=NULL)
    {
        curr=curr->lptr;
    }
    return curr;
}

Node *deleteBST(Node *root,int val)
{
    if(val < root->data)
    {
        root->lptr=deleteBST(root->lptr,val);
    }
    else if(val> root->data)
    {
        root->rptr=deleteBST(root->rptr,val);
    }
    else
    {
        if(root->lptr==NULL)
        {
            Node *temp=root->rptr;
            free(root);
            return temp;
        }
        else if(root->rptr==NULL)
        {
            Node *temp=root->lptr;
            free(root);
            return temp;
        }
        Node *temp=Inorder(root->rptr);
        root->data=temp->data;
        root->rptr=deleteBST(root->rptr,temp->data);
    }
    return root;
}

int main()
{
    Node *root=NULL;
    while(1)
    {
        cout<<"1.Insert\n2.Traverse\n3.Search\n4.Delete"<<endl;
        int choice;
        cout<<"Your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            int num1;
            cout<<"Enter The Number : ";
            cin>>num1;
            cout<<endl;
            root=insertBST(root,num1);
            break;
        }
        case 2:
        {
            int num2;
            cout<<"1.Inorder\n2.Preorder\n3.postorder"<<endl;
            cout<<"Your choice:";
            cin>>num2;
            switch(num2)
            {
            case 1:
                inorder(root);
                cout<<endl;
                break;
            case 2:
                preorder(root);
                cout<<endl;
                break;
            case 3:
                postorder(root);
                cout<<endl;
                break;
            }
            break;
        }
        case 3:
        {
            int num3;
            cout<<"Enter the number to search: ";
            cin>>num3;
            if (searchBST(root,num3)==NULL)
            {
                cout<<"The number doesn't exist in the BST"<<endl;
            }
            else
            {
                cout<<"The number exists in the BST"<<endl;
            }
            break;
        }
        case 4:
        {
            int num4;
            cout<<"Enter the number to delete: ";
            cin>>num4;
            root=deleteBST(root,num4);
            break;
        }
        default:
            cout<<"Please enter a choice between 1-4"<<endl;
        }
    }

    return 0;
}
