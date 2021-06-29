#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, x;
		cin >> a >> b >> x;
		// view the image in this repository for the derivation of formula
		cout << (b - a) / x << '\n';
	}
	return 0;
}
