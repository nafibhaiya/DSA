
#include<iostream>
using namespace std;
struct BstNode
{
    string id;
    string name;
    double cgpa;
    BstNode *left;
    BstNode *right;
};
BstNode *root;
BstNode *GetNewNode(string id, string name,double cgpa)
{
    BstNode *NewNode = new BstNode();
    NewNode->id = id;
    NewNode->name=name;
    NewNode->cgpa=cgpa;
    NewNode->left = NULL;
    NewNode->right = NULL;
    return NewNode;
}
BstNode *Insert(BstNode *root,string id,string name,float cgpa)
{
    if(root==NULL)
    {
        root = GetNewNode(id, name, cgpa);
        cout << "Succesfully Inserted!" << "\n";
    }
    else if(id <= root->id)
    {
        root->left = Insert(root->left, id, name, cgpa);
    }
    else
    {
        root->right = Insert(root->right, id, name, cgpa);
    }
    return root;
}
void inorderTraversal(struct BstNode* root)
{
    if(root == NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    cout << "ID: " << root->id << "\n";
    cout << "NAME: "<< root->name << "\n";
    cout << "CGPA: " << root->cgpa << "\n\n";
    inorderTraversal(root->right);
}
bool Search(BstNode *root,string id)
{
    if(root==NULL)
    {
        cout << "No student details" << "\n";
        return false;
    }
    else if(root->id == id)
    {
        return true;
    }
    else if(id <= root->id)
    {
        return Search(root->left, id);
    }
    else
    {
        return Search(root->right, id);
    }
}
int main()
{
    cout << "\n";
    root = NULL;
    root = Insert(root, "232", "Niloy", 4.00);
    root = Insert(root, "38947", "Rahman", 3.9);
    root = Insert(root, "3434", "Niloy", 3.8);
    root = Insert(root, "3435", "Akash", 3.85);
    cout << "\n";
    cout << "Student Deatils : " << "\n";
    cout << "============================================" << "\n";
    inorderTraversal(root);
    cout << "============================================" << "\n";
    cout << "Enter id you want to search : ";
    string s;
    cin >> s;
    if(Search(root, s) == true)
    {
        cout << "STUDENT ID FOUND!" <<endl;
    }
    else
    {
        cout << "STUDENT ID NOT FOUND" << endl;
    }
    return 0;
}
