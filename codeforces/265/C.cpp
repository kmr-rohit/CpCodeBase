#include <bits/stdc++.h>
using namespace std;


void solve() {
	const int N = 1e6 + 6;
	int l[N], r[N];
	string s;
	cin >> s;
	int ll = 0, rr = 0;
	for(int i = 0; i < s.size(); ++i) {
		if(s[i] == 'l')
			l[ll++] = i + 1;
		else 
			r[rr++] = i + 1;
	}

	for(int i = 0; i < rr; ++i)
		cout << r[i] << '\n';

	for(int i = ll - 1; i >= 0; --i)
		cout << l[i] << '\n';

}
int main() {
	int tt = 1; //cin >> tt;
	while(tt--) {
		solve();
	}
	
} 

