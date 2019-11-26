#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll i,j,m,p,q,r,d,n;
struct Node{
    int data;
    Node *left;
    Node *right;
};
Node *insert(Node *root,int data)
{
    if(root==NULL)
    {
        root=new Node;
        root->data=data;
        root->left=NULL;
        root->right=NULL;
    }
    else if(data<=root->data)
    root->left=insert(root->left,data);
    else
        root->right=insert(root->right,data);
    return root;
}
void levelTra(Node *root)
{
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        Node *ptr=q.front();
        cout<<ptr->data<<" ";
        if(ptr->left!=NULL)
            q.push(ptr->left);
        if(ptr->right!=NULL)
            q.push(ptr->right);
        q.pop();
    }
}
int main()
{
    cin>>n;
    Node *root=NULL;
    for(i=1;i<=n;i++)
    {
       cin>>d;
       root= insert(root,d);
    }
    levelTra(root);
}
