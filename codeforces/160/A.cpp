#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n,1);
    int sum = 0;
    for(int i = 0;i<n;i++){
        int temp;
        cin>>temp;
        v[i] = temp;
        sum += v[i];
    }
    sort(v.begin() , v.end() , greater<int>());
    int tempsum = 0;
    for(int i= 0;i<n;i++){
        tempsum += v[i];
        if(sum-tempsum < tempsum){
            //cout<<tempsum<<" "<<sum<<" "<<i<<" "<<n<<endl;
            cout<< i+1 <<endl;
            break; 
        }
    }
}