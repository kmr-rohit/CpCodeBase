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
	string a;
	cin>>a;
	string b;
	cin>>b;

	map<char , int> m1;

	for(int i = 0;i<a.size();i++){
		m1[a[i]]++;
	}
	for(int i = 0;i<b.size();i++){
		m1[b[i]]++;
	}

	string c;
	cin>>c;
	map<char , int>m2;
	for(int i =0;i<c.size();i++){
		m2[c[i]]++;
	}
	if(m1.size() != m2.size()){
		cout<<"NO"<<endl;
		return 0;
	}
	for(auto x:m1){
		if(x.second != m2[x.first]){
			cout<<"NO"<<endl;
			return 0;
		}
	}

	cout<<"YES"<<endl;

	
	
#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}