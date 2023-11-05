#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
     long long int n,x;
    
    cin>>n>>x;long long int sum=0;
    int dup =x;
    vector< long long int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        sum+=vec[i];
        
    }
    int i=0;
    
    while(vec[i]%x==0){
        sum+=vec[i];
        i++;
        i=i%n;
        if(i==0)x=x*dup;
        
    }
    cout<<sum<<endl;
    }
}