#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
    	long long a ,b,n;
    cin>>a>>b>>n;
    long long ans = 0;
    for(int i = 0;i<n;i++){
    	long long temp;
    	cin>>temp;
    	if(temp < a-1){
    		ans += temp;
		}
		else{
			ans += a-1;
		}
	}
	ans += (b);
	cout<<ans<<endl;
	}
    
}
