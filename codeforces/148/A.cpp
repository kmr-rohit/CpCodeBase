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
	vector<int> test;
	
	for(int j = 0;j<4;j++){
		int t;
		cin>>t;
		test.push_back(t);
	}
	int n;
	cin>>n;
	vector<int> vis(n+1 , 0);
	int ans = 0;
	for(int i =0;i<4;i++){
		for(int j = 1; j<=n;j++){
			if(j%test[i] == 0 && vis[j] == 0){
				ans++;
				vis[j] = 1;
			}
		}
	}

	cout<<ans<<endl;
	
	
#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}