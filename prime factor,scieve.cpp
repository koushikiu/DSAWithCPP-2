#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll i,j,m,n,p,q,r,s,a[46344],c,cc,l,mm;
vector<ll>v;
ll sol(ll q)
{
    for(i=0;i<l&&v[i]*v[i]<=q;i++)
    {
        c=0,cc=0,r=v[i];
        if(q%v[i]==0)
        {
            while(q%v[i]==0)
                q/=v[i],c++;
        }

    }
    if(q>1)
    c++;

}
int main()
{
    v.push_back(2);
    for(i=3;i<=215;i+=2)
    {
        if(a[i]==0)
        {
            for(j=i*i;j<=46340;j+=2*i)
                a[j]=1;
        }
    }
    for(i=3;i<=46340;i+=2)
        if(a[i]==0)
        v.push_back(i);
    l=v.size();
}
