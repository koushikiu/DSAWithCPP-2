#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll i,j,m,n,r;
struct node{
    int data;
    node *next;
};
node *head;
void travarsal(node *start)
{
     while(start!=NULL)
    {
      cout<<start->data<<" ";
      start=start->next;
    }
}
void reverse(node *p)
{
    if(p->next==NULL)
    {
        head=p;
        return;
    }
    reverse(p->next);
    node *q=p->next;
    q->next=p;
    p->next=NULL;

}
int main()
{
    srand(1);
    node *temp,*tra;
    cout<<"Data: ";
    for(i=0;i<10;i++)
    {
        r=rand()%10 + 1;
        cout<<r<<" ";
        temp=new node;
        temp->data=r;
        temp->next=NULL;
       if(i==0)
       head=temp;
       else
       tra->next=temp;
       tra=temp;

    }
   // travarsal(head);
   cout<<"\n";
   reverse(head);
   travarsal(head);

}
