#include<bits/stdc++.h> 
using namespace std;

int main(){
  int n;
  cin>>n;
  map<int , int> m;
  for(int i = 1;i<=n;i++){
    int temp;
    cin>>temp;
    m[temp] = i;
  }
  int ans = 0;
  int check = INT_MAX;
  for(auto x : m){
    if(x.second < check){
      ans = x.first;
      check = x.second;
    }
  }

  cout<<ans<<endl;
}