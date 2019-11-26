#include<bits/stdc++.h>
using namespace std;
char a[10000],b[10000],a1[10000],b2[10000];
string x,y;
long long int l,m,i,j,c,f,e,k,t,b1[10000],d,d1,f1;
int main()
{
    while(scanf("%s%s",a,b)!=EOF)
    {
    d=0;
    d1=0;
    c=0;
    x=a;
    y=b;
    l=x.size();
    m=y.size();
    if(m<l)
    {
        for(i=0;i<l-m;i++)
            b2[i]='0';
        b2[l-1]='\0';
        y=b2+y;
    }
    else if(l<m)
    {
       for(i=0;i<m-l;i++)
            a1[i]='0';
        a1[m-1]='\0';
        x=a1+x;
    }
    l=x.size();
    for(i=(l-1);i>=0;i--)
    {
        if(x<y)
            swap(x,y);
        e=(y[i]-'0')+c;
        f=x[i]-'0';
        if(f<e)
        {
            f+=10;
            t=f-e;
            if(t==0)
                d1++;
            b1[d++]=t;
            c=1;
        }
        else
        {
            t=f-e;
            if(t==0)
                d1++;
            b1[d++]=t;
            c=0;
        }
    }
    f1=d-1;
if(d==d1)
    printf("0");
else if(d==1)
    printf("%lld",b1[d-1]);
else
     for(j=d-1;j>=0;j--)
     {
        if(j==f1&&b1[j]==0)
        {
            f1--;
        }
    else
    printf("%lld",b1[j]);
     }
printf("\n");
    }
}
