#include <iostream>
using namespace std;

int main() {
   int n,t;
  cin>>n>>t;
   string s;
  cin>>s;
  while(t--){
    for(int i =1;i<= n ;i++){
      if(i!=n){
        if(s[i-1] == 'B' && s[i] == 'G'){
          swap(s[i-1] , s[i]);
          i=i+1;
        }
      }
    }
  }
  cout<<s<<endl;
}