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
		vector<vector<int>> ans(3 , std::vector<int>(3 ,1));
		vector<vector<int>> query(3 , vector<int>(3 , -1));

		for(int i =0;i<3;i++){
			for(int j = 0;j<3;j++){
				int temp;
				cin>>temp;
				query[i][j]=temp;
			}
		}

		for(int i =0;i<3;i++){
			for(int j=0;j<3;j++){
				int sum = query[i][j];

				if(i-1>=0 && j>=0){
					sum += query[i-1][j];
				}
				if(i+1<3 && j>=0){
					sum += query[i+1][j];
				}
				if(i>=0 && j-1>=0){
					sum += query[i][j-1];
				}
				if(i>=0 && j+1<3){
					sum += query[i][j+1];
				}

				if(sum%2!=0){
					ans[i][j]=0;
				}
			}
		}

		for(int i = 0;i<3;i++){
			for(int j = 0;j<3;j++){
				cout<<ans[i][j];
			}
			cout<<endl;
		}

		cout<<endl;
		
		
#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}