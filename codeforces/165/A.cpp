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
	vector<pair<int , int>> v;
	for(int i = 0;i<n;i++){
		int a , b;
		cin>>a>>b;
		v.pb({a, b});
	}
	vector<bool> vis(n+1 , 0);
	int cnt = 0;
	for(int i=0;i<n;i++){
		bool left = false, right = false , up = false , down = false;
		int x = v[i].first , y = v[i].second;
		for(int j = 0;j<n;j++){
			int xd = v[j].first , yd = v[j].second;
			if(xd > x && yd == y){
				right = true;
			}
			if(xd < x && yd == y){
				left = true;
			}
			if(xd == x && yd > y){
				up = true;
			}
			if(xd == x && yd < y){
				down = true;
			}
		}

		cnt += (up && down && left && right);
	}
	cout<<cnt<<endl;
	
#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}