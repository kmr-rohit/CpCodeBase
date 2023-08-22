//  B. Fancy Coins

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
    int t; cin >> t;
        while (t--) {
            ll m, k, a1, ak; cin >> m >> k >> a1 >> ak;

            function<ll(ll)> count_ext_block = [&] (ll x) {
                ll ans = 0;
                // first reduce to remainder 0
                ans += x % k;
                x -= x % k;

                ll take = min(ak, x / k);
                x -= take * k;
                ans += x / k;

                return ans;
            };

            // take all ones first
            ll ans = count_ext_block(m - min(m, a1));

            ll red_m = m - min(m, a1);
            if (red_m) {
                ll less_red_m = red_m + (k - (red_m % k));
                if (less_red_m <= m) ans = min(ans, count_ext_block(less_red_m));
            }
            cout << ans << endl;
            }
    return 0;
}
