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
		string a , b;

		cin>>a>>b;

		char size1;
		char size2;
		int cntx1 = 0;
		int cntx2 = 0;
		for(int i = 0;i<a.size();i++){
			if(a[i] == 'X'){
				cntx1++;
			}
			size1 = a[i];
		}
		for(int i = 0;i<b.size();i++){
			if(b[i] == 'X'){
				cntx2++;
			}
			size2 = b[i];
		}
		if(size1 == 'S'){
			if(size2 == 'S'){
				if(cntx1 > cntx2){
					cout<< "<" << endl;
				}
				else if(cntx1 == cntx2){
					cout<< "=" << endl;
				}
				else{
					cout<< ">" << endl;
				}
			}
			else{
				cout<<"<"<<endl;
			}
		}
		if(size1 == 'M'){
			if(size2 == 'M'){
				cout<< "=" << endl;
			}
			else if(size2 == 'S'){
				cout<< ">"<<endl;
			}
			else{
				cout<<"<"<<endl;
			}
		}
		if(size1 == 'L'){
			if(size2 == 'L'){
				if(cntx1 > cntx2){
					cout<< ">" << endl;
				}
				else if(cntx1 == cntx2){
					cout<< "=" << endl;
				}
				else{
					cout<< "<" << endl;
				}
			}
			else{
				cout<<">"<<endl;
			}
		}
	}

	
#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}