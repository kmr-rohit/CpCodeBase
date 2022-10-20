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
	int t;
	cin>>t;

	while(t--){
		int n;cin>>n;
	vector<int> arr;
	
	for(int i =0;i<n;i++){
		int temp;
		cin>>temp;
		arr.pb(temp);
	}

	int i = 0;
	int j = n-1;
	int cnt = 0;
	while(i<j){
		if(arr[i] == 1 && arr[j] == 0 ){
			cnt++;
			swap(arr[i] , arr[j]);
			i++;
			j--;
		}
		else if(arr[i] == 1 && arr[j] == 1){
			j--;
		}
		else{
			if(arr[i] == 0 && arr[j] == 0){
				i++;}
				else{
					if(arr[i] == 0 && arr[j] == 1){
						i++;j--;
					}
				}
		}


	}
	cout<<cnt<<endl;

}	
#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}