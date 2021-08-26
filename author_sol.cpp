#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int ans = 0;
		// The described sorting algorithm is similar to Odd-even sort.
		while (!is_sorted(a.begin(), a.end())) {
			// run f(i) first in even positions, then odd positions, and so on.
			for (int i = ans % 2; i + 1 < n; i += 2) {
				if (a[i] > a[i + 1]) {
					swap(a[i], a[i + 1]);
				}
			}
			ans += 1;
		}
		cout << ans << '\n';
	}
	return 0;
}
