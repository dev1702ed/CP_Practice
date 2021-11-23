#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include<set>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;
long long M = 1e9 + 7;

int main() 
{
 
   int t=1;
   // cin>>t;
   while(t--)
   
   {
      int n,m;
        cin >> n >> m;
        vector<int> v(n+1);
        for(int i=1;i<n+1;i++)
            cin >> v[i];
     int dp[n+2][m+2];
    memset(dp, 0, sizeof dp);
 
    for(int i = 1; i <= n; i++)
    {
        for(int x = 1; x <= m; x++)
        {
            if(i == 1)
            {
                if(v[i] == 0 || v[i] == x)
                    dp[i][x] = 1;
                else dp[i][x] = 0;
            }
            else
            {
                if(v[i] == 0 || v[i] == x){
                    dp[i][x] = ((dp[i-1][x-1] + dp[i-1][x])%M + dp[i-1][x+1])%M;
                }
                else dp[i][x] = 0;
            }
        }
    }
 
    int ans = 0;
    for(int x = 1; x <= m; x++)
        ans = (ans + dp[n][x]) % M;
    cout<< ans;
      
   }
   
    
   
   

   return 0;
}