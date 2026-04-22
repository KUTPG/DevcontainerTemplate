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

	int a, b, c, x, count = 0;
	cin >> a >> b >> c >> x;

	for (int i = 0; i <= a; i++) {
		for (int j = 0; j <= b; j++) {
			for (int k = 0; k <= c; k++) {
				if ((500 * i + 100 * j + 50 * k) == x) {
					count++;
				}
			}
		}
	}

	cout << count << endl;
	return 0;
}
