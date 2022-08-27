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
#define test_read int t;cin>>t;
int solve(){ 
	int cnt = 0;
	map<char , int > m;
	for(int i = 0;i<2;i++){
		for(int j = 0;j<2;j++){
				char temp;
				cin>>temp;
				m[temp]++;
		}
	}
	int ans = 0;
	vector<int> arr ;
	for(auto x:m){
		 arr.push_back(x.second);
	}
	sort(arr.begin() , arr.end() , greater<int>());
	for(int i = 1;i<arr.size();i++){
		if(arr[i] %2 == 0){
			cnt+= arr[i]/2;
		}
		else{
			cnt += (arr[i] + 1)/2;
		}
	}
	return cnt;

}
int main(){
	test_read
	while(t--){
		cout<<solve()<<endl;
	}

#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}