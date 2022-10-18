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

long long int n;
cin>>n;
 long long int a;
vector<int> vec(n);
 
for(int i=0;i<n;i++){
	cin>>a;
	vec[a-1]=i;
}
 long  long int m;
cin>>m;
 long long int ans1=0 ,ans2=0;
for(int i=0;i<m;i++){
	cin>>a;
	ans1+=vec[a-1]+1;ans2+=n-vec[a-1];
}
cout<<ans1<<" "<<ans2;
 
 

	

	
#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}