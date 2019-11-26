#include<bits/stdc++.h>
using namespace std;
long long int a,b,c,n,m,s,i=2;
int main()
{
    printf("Enter the number of n!:\n");
    cin>>n;
    printf("Enter number that remain in n!:\n");
    cin>>m;
    while(n/m!=0)
    {
        s+=n/m;
        m=pow(m,i++);
    }
    cout<<s;
}
