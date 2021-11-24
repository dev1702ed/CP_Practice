#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
using namespace std;
 

 ll dp[1000001];
 
 
 int main(){
    
    for(int i=1;i<=9;i++){
       dp[i]=1;
    }
    for(int i=10;i<1000001;i++){
       string str=to_string(i);
       sort(str.begin(),str.end());
       char c = '0';
       dp[i]=dp[i-(int)str.back()+(int)c] + 1;
    }
    int m;cin>>m;
    cout<<dp[m];
 
    
     
    
   return 0;
}