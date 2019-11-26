#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

#define pf printf
#define sf scanf

using namespace std;

void solve(){

            int t; char arr[99];
            cin >> t;
            int n = t;
            while( t-- )
            {
                for(int l=0; l<n; l++) cin >> arr[l];
                for(int i=0; i<=pow(2,n)-1; i++)
                {
                    if(i==0)
                    pf("0");
                    for(int j=0; j<n; j++)
                    {
                        if(i & (1 << j))
                        pf("%c", arr[j]);
                    }
                    pf("\n");
                }

            }
        }

int main() {
      solve();
      return 0;
}
