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
#define rep(a, b ,c) for(int i = a;i<b;i = i + c)
int main(){
	int n,m;cin>>n>>m;
	queue<pair<int , int>> q;
	rep(0 , n , 1){
		int temp;
		cin>>temp;
		q.push({temp , i});
	}

	while(q.size() != 1){
		pair<int , int> t;
		t = q.front();
		q.pop();

		if(t.first > m){
			q.push({t.first - m , t.second});
		}
	}
	int ans = q.front().second + 1;
	cout<<ans<<endl;




	
#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}