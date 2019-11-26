#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll  a[5000005],ans;
vector<int>v;
unsigned long long lo,up,i,j,l,r;
int main()
{
    v.push_back(2);
    for(i=3; i<=2236; i+=2)
    {
        if(a[i]==0)
            for(j=i*i; j<=5000000; j+=2*i)
                a[j]=1;
    }
    for(i=3; i<=5000000; i+=2)
        if(a[i]==0)
            v.push_back(i);
    l=v.size();
    for(i=0;i<=5000000;i++)
        a[i]=i;
    for(i=0;i<l;i++)
    {
        r=v[i];
        for(j=r;j<=5000000;j+=r)
        a[j]=((a[j]*(r-1))/r);
    }
    for(i=1;i<=5000000;i++)
    {
        a[i]=a[i]*a[i];
        a[i]+=a[i-1];
    }
    int t;
    scanf("%d",&t);
    int cs=1;
    while(t--)
    {
        scanf("%llu%llu",&lo,&up);
        if(up<lo)
            swap(up,lo);
        ans=a[up]-a[lo-1];
        printf("Case %d: %llu\n",cs,ans);
        cs++;
    }
}
