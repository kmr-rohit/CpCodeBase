#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
typedef long double   lld;
const ll mod=1e9+7;
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define print(a) for(auto i:a)cout<<i<<" ";cout<<endl;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(a) for(auto &i:a)cin>>i
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(x) ll((x.size()))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

int main(){
    
    int n,h,l,r;
    cin>>n>>h>>l>>r;
    
    vector<int> a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    
    vector<vector<int>> dp(n+2 , vector<int>(h+1));
    // base case dp[n+1][t] = 0 for any time after n times sleep there will be 
    // no sleeping left therefore no good sleep
    
    for(int t =0;t<h;t++)dp[n+1][t] = 0;
    
    
    // recurence 
    for(int i = n;i>=1;i--){
        for(int t=0;t<h;t++){
        
        // option 1 -> tdash1 = t + a[i]
        int tdash1 = (t + a[i]) % h;
        int cnt1 = ((l<=tdash1 && tdash1<=r) ? 1 : 0);
        
        dp[i][t] = dp[i+1][tdash1] + cnt1;
        
        // option 2 
        
        int tdash2 = (t + a[i]-1) % h;
        int cnt2 = ((l<= tdash2 && tdash2<=r) ? 1 : 0);
        
        dp[i][t] = max(dp[i][t] ,dp[i+1][tdash2] + cnt2);
        
        }
    }
    
    cout<<dp[1][0]<<endl;

#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}