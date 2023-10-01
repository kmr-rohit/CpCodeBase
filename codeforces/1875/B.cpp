#include<bits/stdc++.h>
using namespace std;
int main() {
int t ;
cin>>t;
while(t--){
int n,m,k;
cin>>n>>m>>k;
vector<int> a(n),b(m);
int min_a=INT_MAX,min_b=INT_MAX,max_a=INT_MIN,max_b=INT_MIN;
long long  sum_a =0,sum_b=0; 
for(int i=0;i<n;i++){
	cin>>a[i];
	min_a=min(min_a,a[i]);
	max_a=max(max_a,a[i]);
	sum_a+=a[i];
}
for(int i=0;i<m;i++){
	cin>>b[i];
	min_b=min(min_b,b[i]);
	max_b=max(max_b,b[i]);
	sum_b+=b[i];
}
if(k==1){
	if(max_b>min_a)
		sum_a+=max_b-min_a;
}
else{
	if(k%2==0){
		if(max_b>min_a)
		sum_a+=max_b-min_a;
		sum_a-=max(max_a,max_b);
		sum_a+=min(min_a,min_b);
	}
	else{
	if(max_b>min_a)	sum_a+=max_b-min_a;
	
		
	}
}
cout<<sum_a<<endl;
}


}

