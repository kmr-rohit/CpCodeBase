#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define len(v) (int)v.size() 
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
	ll n,x; cin>>n>>x;
	// k > 1
	// x < n
	ll num1 = n - x;
	ll num2 = n + x - 2;
	set<ll> s;
	auto getk = [&](ll num){
		for(ll i=1;i<=sqrt(num);i++){
			if(num%i==0){
				ll x1 = i;
				ll x2 = num/i;
				if(x1!=x2){
					if(x1%2==0) {
						if((x1/2) + 1 >= x) s.insert((x1/2) + 1);
					}
					if(x2%2==0) {
						if((x2/2) + 1 >= x) s.insert((x2/2) + 1);
					}
				}
				else{
					if(x1%2==0) {
						if((x1/2) + 1 >= x) s.insert((x1/2) + 1);
					}
				}
			}
		}
	};
	getk(num1);
	if(x > 1) getk(num2);
	cout<<len(s)<<endl;
	
}
int main(){
	ios::sync_with_stdio(false);
	int T;
	cin>>T;
	while(T--){
		solve();
	}
	
	return 0;
}
