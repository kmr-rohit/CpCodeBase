#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size();
    string ans = "";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    for(int i =-1;i<n-1;i++){
        if(s[i+1] != 'y'  && s[i+1] != 'a' && s[i+1] != 'e' && s[i+1] != 'i' && s[i+1] != 'o' && s[i+1] != 'u' ){
            ans += '.';
            ans += s[i+1];
        }
        else{
            continue;
        }
    }
    cout<<ans<<endl;
}