#include<bits/stdc++.h>
using namespace std;
long long int a[10005],i,j,m,n,c;
int main()
{
    cin>>n;
    if(n%10!=0)
    {
        cout<<"No tralling zero remain\n";
        return 0;
    }
    else
    {
        while(n%10==0)
        {
            c++;
            n/=10;
        }
    }
    cout<<c;
}
