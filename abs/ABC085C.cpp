#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
using vl = vector<ll>;
using vvl = vector<vl>;
using pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep2(i, a, b) for (ll i = (a); i < (ll)(b); i++)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

const ll INF = 1e18;
const ll MOD = 1e9 + 7;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, y;
	cin >> n >> y;

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n - i; j++) {
			for (int k = 0; k <= n - i - j; k++) {
				if (i * 10000 + j * 5000 + k * 1000 == y && (i + j + k == n)) {
					cout << i << " " << j << " " << k << endl;
					return 0;
				}
			}
		}
	}

	cout << -1 << " " << -1 << " " << -1 << endl;

	return 0;
}
