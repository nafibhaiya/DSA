#include<iostream>
using namespace std;
class Node
{
public:
    int key;
    Node *left;
    Node *right;
    Node(int key)
    {
        this->key=key;
        left=right=NULL;
    }
};
Node* insert(Node*root,int key)
{
    if(root==NULL)
        return new Node(key);
    if(key<root->key)
    {
        root->left=insert(root->left,key);
    }
    else
    {
        root->right=insert(root->right,key);
    }
    return root;
}
void printInOrder(Node *root)
{
    if (root==NULL)
        return;
    printInOrder(root->left);
    cout<<root->key<<",";
    printInOrder(root->right);
}
void printPreOrder(Node *root)
{
    if (root==NULL)
        return;
    cout<<root->key<<",";
    printPreOrder(root->left);
    printPreOrder(root->right);
}
void printPostOrder(Node *root)
{
    if (root==NULL)
        return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->key<<",";
}
bool search(Node*root,int key)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->key==key)
    {
        return true;
    }
    if(key<root->key)
    {
        return search(root->left,key);
    }
    return search(root->right,key);
}
Node* findMid(Node* root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}
Node* remove(Node* root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(key<root->key)
    {
        root->left=remove(root->left,key);
    }
    else if(key>root->key)
    {
        root->right=remove(root->right,key);
    }
    else
    {
        if(root->left==NULL and root->right==NULL)
        {
            delete root;
            root=NULL;
        }
        else if(root->left==NULL)
        {
            Node*temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right==NULL)
        {
            Node*temp=root;
            root=root->left;
            delete temp;
        }
        else
        {
            Node * temp=findMid(root->right);
            root->key=temp->key;
            root->right=remove(root->right,temp->key);
        }
        return root;
    }
}
int main()
{
    Node* root=NULL;
    int arr[]= {10,25,45,55,65,12,46,78,99,100,29};
    for(int x:arr)
        root=insert(root,x);
    cout<<"InOrder :"<<endl;
    printInOrder(root);
    cout<<"\nPreOrder :"<<endl;
    printPreOrder(root);
    cout<<"\nPostOrder :"<<endl;
    printPostOrder(root);
    int key=99;
    cout<<"\nSearching 99 ";
    if(search(root,key))
        cout<<"\nFound"<<endl;
    else
        cout<<"Not Found"<<endl;
    root=remove(root,key);
    cout<<"After Delete 99 Inorder : "<<endl;
    printInOrder(root);
    cout<<endl;
    return 0;
}
