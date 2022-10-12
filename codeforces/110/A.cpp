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

bool isValid(string s){
	map<char , int>m;
	for(int i = 0;i<s.size();i++){
		m[s[i]]++;
	}
	// cout<<m.size()<<endl;
	// if(m.size()<2 || m.size()>2){
	// 	return false;
	// }
	// cout<<m['4'] << " " << m['7'] <<endl;
	if(m['4'] + m['7'] ==4 || m['4'] + m['7'] ==7 ){
		return true ;
	}
	
	return false;

}

int main(){
		string s;
		cin>>s;
		
		if(isValid(s)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}