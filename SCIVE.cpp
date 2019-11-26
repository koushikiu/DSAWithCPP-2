#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll i,j,m,n,p,q,r,s,a[2000005],cprime[1000005];
ll sceve(ll n)
{
    a[1]=1;s=sqrt(n);
    for(i=3;i<=s;i+=2)
    {
        if(a[i]==0)
        {
            for(j=i*i;j<=n;j+=(2*i))
                a[j]=1;
        }
    }
}

int main()
{
    cin>>m;
    sceve(m);
            cprime[2]=1;
    for(i=3;i<=m;i++)
{
    if(a[i]==0&&i%2!=0)
        cprime[i]=cprime[i-1]+1;
    else
        cprime[i]=cprime[i-1];
}
    cout<<cprime[20]-cprime[9];
}
