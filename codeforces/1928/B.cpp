#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Place your code here
  int test_case;
  cin >> test_case;
  while(test_case--)
  {
    int n;
    cin>>n;
    vector<int> arr;
    map<int , bool> mp;
    map<int , bool> gapMap;
    int cnt = 1;
    for(int i =0;i<n;i++){
      int temp;
      cin>>temp;
      if(mp[temp] == false){
        arr.push_back(temp);
        mp[temp] = true;
      }
    }
    sort(arr.begin() , arr.end());
    int j = 0;
    for (int i = 0; i < arr.size(); i++) {
        while(arr[i] - arr[j] >= n) {
            j++;
        }
        cnt = max(cnt, i - j + 1);
    }
    cout<<cnt<<endl;
  }
}