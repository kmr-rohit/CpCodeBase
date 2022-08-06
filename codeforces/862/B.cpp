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
#define read(a) for(auto &i:a){int temp; cin>>temp ; a[i] = temp;}
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(x) ll((x.size()))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

bool bipartiteDfs(long long int src , vector<long long int> adj[] , vector<long long int> &color){
            for(auto it:adj[src]){
            	
                if(color[it] == -1){
                  color[it] = 1 - color[src];
                    if(!bipartiteDfs(it , adj , color))
                        return false;
                }
                else if(color[it] == color[src])
                    return false;
            }
        
        return true;
    }

int main(){
	long long int n;
	cin>>n;
	long long int blue = 0;
	long long int green = 0;
	vector<long long int> adj[n+1];
	vector<long long int> color(n+1 , -1);

	for(int i = 0;i<n-1;i++){
		long long int v;
		cin>>v;
		long long int u;
		cin>>u;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for(int i =1;i<=n;i++){
		if(color[i] == -1){
			color[i] = 1;
	            if(bipartiteDfs(i , adj,color)){
	                for(int i = 1;i<=n;i++){
	                	
								if(color[i] == 0){
									blue++;
								}
								else{
									green++;
								}
							}

							cout<< blue*green - n+1<<endl;;

	            }
	            else{
	            	cout<< -1<<endl;;

	            }
		}
	}
	return 0;

	



#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}