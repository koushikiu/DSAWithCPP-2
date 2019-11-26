#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll i,j,p,q,r,s,n,num;
struct Node{
    int data;
    Node* left;
    Node* right;
};
queue<Node* >qu;
Node* root=NULL,*node;
Node* balanceBinaryTree(int num)
{
   Node* ptr=new Node;
        ptr->data=num;
        ptr->left=NULL;
        ptr->right=NULL;
    if(root==NULL)
    {
        root=ptr;
        qu.push(root);
    }
    else
    {
        node=qu.front();
       if(node->left==NULL)
       {
           node->left=ptr;
           qu.push(ptr);
       }
       else if(node->right==NULL)
       {
           node->right=ptr;
           qu.push(ptr);
           qu.pop();
       }
    }
    return root;
}
void travershal(Node* root)
{
    queue<Node* >Q;
    Q.push(root);
    while(!Q.empty())
    {
        Node* ptr=Q.front();
        cout<<ptr->data<<" ";
        if(ptr->left!=NULL)
            Q.push(ptr->left);
        if(ptr->right!=NULL)
            Q.push(ptr->right);
        Q.pop();
    }
}
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>num;
        root=balanceBinaryTree(num);
    }
    travershal(root);

}
