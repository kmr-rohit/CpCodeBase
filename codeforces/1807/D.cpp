#include <iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int n,q;
    cin>>n>>q;
    long long pr[n+1];
    pr[0]=0;
    for(int i=1;i<n+1;i++){
        cin>>pr[i];
        pr[i]=((pr[i])+pr[i-1]);

    }
    while(q--)
    {
    int l,r;
    long long k;
    cin>>l>>r>>k;

    k=k;
    long long s=pr[n]-(pr[r]-pr[l-1])+k*(r-l+1);
    if(s%2==1) {cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    }
   } 
    
}