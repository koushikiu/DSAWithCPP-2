#include<bits/stdc++.h>
using namespace std;
long long int i,j,s=1,c,m,n,a[100005];
int main()
{
 cin>>n;
 if(n%2==0)
 {
     c=0;
     while(n%2==0)
     {
         c++;
         n/=2;
     }
     s*=(c+1);
 }
 for(i=3;i<=sqrt(n);i+=2)
 {
     if(n%i==0)
     {
         c=0;
         while(n%i==0)
         {
             c++;
             n/=i;
         }
         s*=(c+1);
     }
 }
 if(n>1)
 {
     c=1;
     s*=(c+1);
 }
 cout<<s;
}
