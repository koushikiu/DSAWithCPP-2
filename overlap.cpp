#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll i,j,m,n,p,s,e,l,k;
vector<pair<ll,ll> >v,v1;
int main()
{
  cin>>n;
  for(i=1;i<=n;i++)
  {
      cin>>s>>e;
      v.push_back({s,e});
  }
  sort(v.begin(),v.end());
  for(i=0;i<n;i++)
  {
      k=i;
      p=v[k].second;
      for(j=i+1;j<n;j++)
      {
          if(v[j].first<=p)
          {
              if(p<=v[j].second)
              p=v[j].second;
              i=j;
          }
      }
      v1.push_back({v[k].first,p});
  }
 for(i=0;i<v1.size();i++)
      cout<<v1[i].first<<" "<<v1[i].second<<"\n";
}
