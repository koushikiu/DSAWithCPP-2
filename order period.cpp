#include <set>
#include<stdio.h>
using namespace std;
int main()
{
     long long i,j,t,c,a,b,d[100],k,ss,p,x;
    set<int>s;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        c=1;
        scanf("%ld%lld",&a,&b);
        for(j=1;j<=12;j++)
        {
            ss=1;
            for(k=1;k<=j;k++)
            ss*=a;
            p=ss%10;
            d[c++]=p;
            s.insert(p);
        }
        x=b%(s.size());
      if(a==0)
            printf("0\n");
      else if(b==0)
        printf("1\n");
      else if(s.size()==1)
            printf("%d\n",d[1]);
      else if(x==0)
            printf("%d\n",d[s.size()]);
      else
            printf("%d\n",d[x]);
       s.clear();
    }
}

