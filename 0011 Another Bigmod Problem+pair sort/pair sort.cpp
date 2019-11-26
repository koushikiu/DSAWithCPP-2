#include<bits/stdc++.h>
using namespace std;
long long i,j,m,n,a,b,c,mai;
typedef pair<long long,long long> pii;
struct node
{
    int x;
    int y;
}ar[1000005];
bool com(node a, node b)
{
if(a.x==b.x)
    return a.y<b.y;
else
    return a.x<b.x;
}
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        ar[i].x=a;
        ar[i].y=b;
    }
sort(ar,ar+n,com);
for(i=0;i<n;i++)
    cout<<ar[i].x<<" "<<ar[i].y<<"\n";

}
