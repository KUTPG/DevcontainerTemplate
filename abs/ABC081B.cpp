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
	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int count = 0;

	while (true) {
		for (int i = 0; i < n; i++) {
			int r = v[i];
			if (r % 2 == 1) {
				cout << count << endl;
				return 0;
			} else {
				v[i] /= 2;
			}
		}
		count++;
	}

	cout << count << endl;

	return 0;
}
