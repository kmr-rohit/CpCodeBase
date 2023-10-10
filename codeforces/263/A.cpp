#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            int temp;
            cin>>temp;
            if(temp == 1){
                a = i+1;
                b = j+1;
                break;
            }
        }
    }

    cout<<abs(3-a) + abs(3 -b)<<endl;
}