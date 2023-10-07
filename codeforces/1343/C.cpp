#include <bits/stdc++.h>
 
using namespace std;

long long ab(long long a){
    if (a < 0){
        return -a;
    }
    else{
        return a;
    }
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        pair<int, long long> od, ev;
        od = {0, 0};
        ev = {0, 0};
        for (int i = 0; i < n; i++){
            long long a;
            cin >> a;

            if (a < 0){
                if (od.first == ev.first + 1 && od.second >= ev.second + a){
                    continue;
                }
                od.first = ev.first + 1;
                od.second = ev.second + a;
            }
            else{
                if (ev.first == od.first + 1 && ev.second >= od.second + a){
                    continue;
                }
                ev.first = od.first + 1;
                ev.second = od.second + a;
            }
        }

        if (od.first > ev.first){
            cout << od.second << "\n";
        }
        else if (ev.first > od.first){
            cout << ev.second << "\n";
        }
        else{
            cout << max(ev.second, od.second) << "\n";
        }
    }
    return 0;
}