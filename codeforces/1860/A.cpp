//  A. Not a Substring

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;

        if(s == "()"){
            cout<<"NO"<<endl;
            continue;
        }
        string res = "";
        int len = s.size();
        bool cntinoius = false;
        for(int i = 0;i<len-1;i++){
            if(s[i] == s[i+1]){
                cntinoius = true;
            }
        }
        int cnt = 0;
        if(cntinoius){
            while(cnt<2*len){
                res += "()";
                cnt+=2;
            }
        }
        else{
            for(int i =0;i<len;i++){
                res += "(";
            }
            for(int i =0;i<len;i++){
                res += ")";
            }

        }
        cout<<"YES"<<endl;
        cout<<res<<endl;
        
    }

    return 0;
}
