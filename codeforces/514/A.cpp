#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long ans = 0;
    int cnt = 0;
    if(n == 9){
        cout<<n<<endl;
        return 0;
    }
    while(n>0){
        if(n/10 == 0){
            if( n == 9){
                ans += (n%10)*pow(10 , cnt);
            }
        }
        if(n%10 > 4){
            ans += (9 - n%10)*pow(10 , cnt);
        }
        else{
            ans += (n%10)*pow(10 , cnt);
        }
        n= n/10;
        cnt++;
    }
    cout<<ans<<endl;
}