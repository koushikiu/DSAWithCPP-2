#include<bits/stdc++.h>
using namespace std;
long long i,j,m,n,p,q,c,d,l,re,di,x,t;
string s;
char a[1005];
int main()
{
    cin>>t;
    while(t--)
    {
    c=0;d=0,p=0;
    cin>>s>>x;
    l=s.size();
    di=(s[0]-'0')/x;
    if(di==0)
        p++;
    re=(s[0]-'0')%x;
    a[c++]=(di+48);
    for(i=1;i<l;i++)
    {
        di=((re*10)+(s[i]-48))/x;
    if(di==0)
        p++;
        re=((re*10)+(s[i]-48))%x;
        a[c++]=(di+48);
    }
   if(c==p)
    printf("%c %lld\n",a[0],re);
   else
   {
       for(j=0;j<c;j++)
       {
           if(a[j]=='0'&&d==0)
            ;
           else
           {
               printf("%c",a[j]);
               d=1;
           }
       }
       printf(" %lld\n",re);
   }
    }
}
