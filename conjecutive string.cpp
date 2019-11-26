#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll i,j,m,n,p,q,r,l;
string a,b,s;
string addOne(string ss)
{
    r=ss.size();
    if(ss[r-1]<'9')
    {
        ss[r-1]=char((ss[r-1]-0)+1);
    }
    else
    {
        r--;
        while(ss[r]=='9')
        {
            ss[r]='0';
            r--;
        }
        if(r<0)
            ss='1'+ss;
        else
           ss[r]=char((ss[r]-0)+1);
    }
    return ss;
}
int main()
{
    cin>>s;
    l=s.size();q=l/2+1;
    for(i=0;i<q;i++)
    {
        a=s.substr(0,i+1);
        p=0;
        while(1)
        {
           if(p==0)
           {
            p+=a.size();
            b=addOne(a);
           }
           else
           {
               p+=b.size();
               b=addOne(b);
           }
           if(p==l)
           {
               cout<<"YES\n";
               return 0;
           }
           int f=s.find(b,p);
           if(f!=p)
            break;

        }
    }
    cout<<"NO";
}
