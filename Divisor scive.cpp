#include<bits/stdc++.h>
#define fr(i,m) for(int i=0;i<m;i++)
using namespace std;
int a[1000005]={0};
int aa[13970039]={0};
long prime()
{

            long n,i,k;

            n=13970034;

            aa[1]=1;

            for(i=4;i<=n;i+=2)
            aa[i]=1;

	for(i=3;i<=sqrt(n);i=i+2)
	{
		if(aa[i]!=1)
		{
			for(k=i*i;k<=n;k=k+2*i)
            aa[k]=1;
		}
	}
}
long divisor()
{
     long i,j,s=0;

     for(i=1;i<=1000000;i++)
     {
         for(j=i;j<=1000000;j+=i)
         {
             a[j]++;
         }
     }
     for(i=1;i<=1000000;i++)
     {
        s+=a[i];
        a[i]=s;
     }
}
int main()
{

    divisor();
    prime();
    long t,i;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        long n;
        scanf("%ld",&n);
        if(aa[a[n]]==0)
        {
            printf("YES\n",i);
        }
        else
        {
            printf("NO\n",i);
        }
    }

return 0;
}
