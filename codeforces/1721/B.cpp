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

void solve(){
		
		int n, m, row, col, d;
    cin >> n >> m >> row >> col >> d;
 
    int ans = (n + m - 2);
    bool ok1 = (row - d > 1) && (col + d < m);
    bool ok2 = (col - d > 1) && (row + d < n);
 
    if (ok1 || ok2)
        cout << ans << "\n";
    else
        cout << "-1\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}

#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}