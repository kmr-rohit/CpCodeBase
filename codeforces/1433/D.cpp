#include <bits/stdc++.h>
using namespace std;
typedef int lld;
 
const lld N = 200043;
const lld MOD = 1000000007;
 
int main()
{
    lld t;
    cin>>t;
    //t=1;
    while(t--)
    {
        lld n;
        cin>>n;
        lld ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        vector<int> vis(n , 0);
        vector<pair<lld,lld>>v;
        for(int i=0;i<n;i++)
        {
            if(v.size()==n-1)
                break;
            for(int j=i+1;j<n;j++)
            {   //cout<<i<<" "<<j<<" "<<ar[i]<<" "<<ar[j]<<" "<<vis[i]<<" "<<vis[j]<<endl;
                if(ar[j]!=ar[i] && (vis[j]==0 || vis[i]==0))
                {
                    v.push_back({i+1,j+1});
                    vis[i]=1;
                    vis[j]=1;
 
                }
            }
        }
        lld ptr=1;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
                ptr=0;
        }
        if(ptr==0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(auto x:v)
                cout<<x.first<<" "<<x.second<<endl;
        }
    
}
  return 0;
  }