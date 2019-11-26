#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> pii;
ll i,j,m,n,p,q,t,c;
int main()
{
   cin>>t;
   while(t--)
   {
       c=0;
       cin>>m>>n;
       for(i=m;i<=n;i++)
       {
          if(((i%4==0)&&(i%100!=0))||(i%400==0))
         c++;
       }
       printf("%lld\n",c);

   }
    return 0;
}
