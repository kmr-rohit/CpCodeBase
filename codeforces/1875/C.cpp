#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        n = n%m;
        int a = n/ __gcd(n,m);
        int b = m/__gcd(n ,m);
        if(__builtin_popcount(b) > 1) {
            cout<<-1<<endl;
        }
        else{
            cout<< (long long) m * __builtin_popcount(a) - n <<endl;
        }    
   }
}