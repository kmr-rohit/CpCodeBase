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
	int mini;
	int maxi;
	vector<int>arr(n , -1);

	for(int i =0;i<n;i++){
		int temp;
		cin>>temp;

		arr[i] = temp;
	}
	int cnt = 0;
	mini = maxi = arr[0];

	for(int i = 1;i<n;i++){
		if(arr[i] < mini || arr[i] > maxi){
			cnt++;
		}
		mini = min(mini , arr[i]);
		maxi = max(maxi , arr[i]);
	}	

	cout<<cnt<<endl;

#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}