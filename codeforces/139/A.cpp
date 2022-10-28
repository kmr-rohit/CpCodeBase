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
	vector<int>d(7 , -1);
	for(int i = 0;i<7;i++){
		int temp;
		cin>>temp;
		d[i] = temp;
	}
	int sum  = 0;
	for(int i = 0;i<INT_MAX;i++){
		sum = sum + d[i%7];
		if(sum >= n){
			cout<<i%7 + 1<<endl;
			break;
		}
	}
	
	
#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}