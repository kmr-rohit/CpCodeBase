#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		map<int , bool> m;
		for(int i = 0;i<n;i++){
		    int temp;
		    cin>>temp;
		    m[temp] = true;
		}
		
		if(m[k]){
		    cout<<"YES"<<endl;
		}
		else{
		    cout<<"NO"<<endl;
		}
	}
}