#include<bits/stdc++.h>
using namespace std;
long long int a[10005],i,j,m,n,c;
int main()
{
    printf("Enter the number\n");
    cin>>n;
    printf("Enter the base\n");
    cin>>m;
    if(n%m!=0)
    {
        printf("No tralling zero\n");
    }
    else
    {
        while(n%m==0)
        {
            c++;
            n/=m;
        }
    }
    cout<<c;
}
