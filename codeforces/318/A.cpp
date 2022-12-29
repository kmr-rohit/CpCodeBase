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
	
		ll n ;
		cin>>n;
		ll k;
		cin>>k;
		if(n%2 == 0){
			if(k-1 < n/2){
				cout<< 2*(k-1) + 1<<endl;
			}
			else{
				cout<<2*k-n<<endl;
			}
		}
		else{
			if(k-1 <= n/2){
				cout<< 2*(k-1) + 1<<endl;
			}
			else{
				cout<<2*k-(n+1)<<endl;
			}

		}
			
		
	

#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}