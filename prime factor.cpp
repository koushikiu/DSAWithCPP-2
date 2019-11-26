#include<bits/stdc++.h>
using namespace std;
long long int b,c,n,i,j,a[1000],p;
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
         a[p++]=2;
     }
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
             a[p++]=i;
         }
     }
 }
 if(n>1)
 {
    c=1;
    a[p++]=n;
 }
for(i=0;i<p;i++)
    cout<<a[i]<<" ";
return 0;

}
