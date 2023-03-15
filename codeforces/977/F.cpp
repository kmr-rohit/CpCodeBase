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

	int n;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		arr.pb(temp);
	}


	// variables
	int len = 0;
	int start = 0;
	// applying dp on values
	map<int , int > dp;
	vector<int> ans;
	for(int i =0;i<n;i++){
		int x = arr[i];
		dp[x] = max(dp[x] , 1); // base case for first occurance of x
		dp[x] = max (dp[x] , dp[x-1] + 1); // reccursive relation

		if(len < dp[x]){
			len = dp[x];
			start = x - len +1;
		}

	}

	for(int i =0;i<n;i++){
		if(arr[i] == start){
			ans.push_back(i);
			start++;
		}
	}

	cout<<len<<endl;
	for(int i = 0;i<ans.size();i++){
		cout<<ans[i] + 1<<" ";
	}



#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}