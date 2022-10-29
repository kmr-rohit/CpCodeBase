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
	vector<int>arr;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		arr.push_back(temp);
	}	
	arr.push_back(arr[0]);
	int diff = INT_MAX;
	int minx = -1, miny = -1;
	for(int i = 0;i<arr.size()-1;i++){
		if(abs(arr[i+1] - arr[i])<diff){
			diff =abs(arr[i+1] - arr[i]);
			minx = i +1;
			miny = i+2;
		}
	}

	if(minx > n){
		minx = minx%n;
	}
	if(miny > n){
		miny = miny%n;

	}
	cout<<minx<<" "<<miny<<endl;
#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}