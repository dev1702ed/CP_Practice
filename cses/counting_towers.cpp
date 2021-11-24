#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
using namespace std;
 
 int n=1000000;
 ll dp[1000001][2];
 
 int main(){
    
 
    
      
      dp[n+1][0] = dp[n+1][1] = 1;
      for(int i=n;i >= 2;i--){
          ll o1 = (dp[i+1][1]+dp[i+1][0])%M;
          ll o2 = dp[i+1][0];
          ll o3 = (2*dp[i+1][0])%M;
          ll o4 = dp[i+1][1];

          dp[i][0] = (o1 + o2+ o3)%M;
          dp[i][1] = (o1 + o4)%M;
      }


      int t;
      cin>>t;
      while(t--){
       int q;cin>>q;
       cout<< (dp[1000000-q+2][1] + dp[1000000-q+2][0])%M <<endl;
      }

    
   return 0;
}