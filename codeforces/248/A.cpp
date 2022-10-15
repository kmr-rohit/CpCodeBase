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
	int n ;
	cin>>n;
	vector<vector<int>> v(n , vector<int> ( 2 , -1));

	for(int i = 0;i<n;i++){
		for( int j = 0;j<2;j++){
			int temp;
			cin>>temp;

			v[i][j] = temp;
		}
	}
	int ones = 0;
	int zeros = 0;
	int ans = 0;
	for(int i =0;i<n;i++){
		if(v[i][0] == 1){
			ones++;
		}
		else{
			zeros++;
		}
	}

	ans += min(ones , zeros);

	ones = 0;
	zeros = 0;
	for(int i =0;i<n;i++){
		if(v[i][1] == 1){
			ones++;
		}
		else{
			zeros++;
		}
	}
	ans += min(ones , zeros);

	cout<<ans<<endl;

#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}