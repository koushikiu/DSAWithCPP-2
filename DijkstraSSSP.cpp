#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<set>
#include<algorithm>
#include<iostream>
#include<stdlib.h>
#include<map>
#include<vector>
#include<bits/stdc++.h>
#define fr(i1,m) for(int i1=0;i1<m;i1++)
#define frr(j1,m1) for(int j1=1;j1<=m1;j1++)
using namespace std;
long d1,a;
vector<int>g[100000];
vector<int>cost[100000];
struct node
{
    int u,w;
    node(int a,int b)
    {
        u=a; w=b;
    }
    bool operator < ( const node& p ) const
    {
        return w > p.w;
    }
};
int d[100022]={0};
int dijkstra(int n)
{
    fr(i,20005)
    {
      d[i]=10000000;
    }
    priority_queue<node>q;

    q.push(node(n,0));
    d[n]=0;

    while(!q.empty())
    {
        node top=q.top();
        q.pop();
        int u=top.u;


        if(u==d1) return d[u];
        for(int i=0;i<(int)g[u].size();i++)
        {
            int v=g[u][i];
            if(d[u]+cost[u][i]<d[v])
            {
                d[v]=d[u]+cost[u][i];
                q.push(node(v,d[v]));
            }
        }
    }
    return d[a-1];
}
int main()
{
    int n1 ,b,c,u,v,w;
    cin>>n1;
    for(int i1=0;i1<n1;i1++)
    {
        cin>>a>>b>>c>>d1;//a=vertex,b=node,c=start,d1=dest
        fr(i,b)
        {
        cin>>u>>v>>w;
        g[u].push_back(v);
        //g[v].push_back(u);//if undirected
        cost[u].push_back(w);
        //cost[v].push_back(w);//if undirected
        }
    int xx;
    xx=dijkstra(0);
    if(xx==-1||b==0)
    printf("Case #%ld: unreachable\n",i1+1);
    else
    printf("Case #%ld: %ld\n",i1+1,xx);
    fr(i,a)
    cout<<d[i]<<" ";
    cout<<endl;
    fr(i,20004)
    {
      g[i].clear();
      cost[i].clear();
    }

    }
}


