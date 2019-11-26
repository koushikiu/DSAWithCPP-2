#include<bits/stdc++.h>
using namespace std;
long long int a[10005],i,j,m,n,c;
double s;
int main()
{
    printf("Enter n!\n");
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s+=log10(i);
    }
    cout<<floor(s)+1;
}
