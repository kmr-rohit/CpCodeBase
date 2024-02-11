#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test_case;
  cin >> test_case;
  while(test_case--)
  {
      int a, b;
	    cin >> a >> b;
	    if (a > b) {
	        swap(a, b);
	    }
	    if (((a % 2 == 1) && (b % 2 == 1)) || ((a % 2 == 1) && (b == 2 * a))) {
	        cout << "No\n";
	    } else {
	        cout << "Yes\n";
	    }
	}
  
}