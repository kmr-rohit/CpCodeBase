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

bool isvalid(int n){
	map<int , int> m;
	while(n){
		m[n%10]++;
		n = n/10;
	}

	for(auto x:m){
		if(x.second > 1){
			return false;
		}
	}
	return true;
}
int main(){
		int n;
		cin>>n;
		n++;
		while(1){
			if(isvalid(n)){
				cout<<n<<endl;
				break;
			}
			else{
				n++;
			}
		}
		
#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}