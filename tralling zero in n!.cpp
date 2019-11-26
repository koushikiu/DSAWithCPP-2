#include<bits/stdc++.h>
using namespace std;
long long int a[10005],i=2,j,p=5,n,c;
int main()
{
    cin>>n;
    while(n/p!=0)
    {
c+=n/p;
p=pow(p,i++);
    }
    cout<<c;

}
