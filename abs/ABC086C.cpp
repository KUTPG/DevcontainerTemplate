#include <bits/stdc++.h>
#include <cstdlib>
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
	int oldT = 0, posX = 0, posY = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int t, x, y, diffX, diffY, total;
		cin >> t >> x >> y;

		diffX = x - posX;
		diffY = y - posY;
		total = abs(diffX) + abs(diffY);
		int elapsed = t - oldT;

		if (total > elapsed || total % 2 != elapsed % 2) {
			cout << "No" << endl;
			return 0;
		}
		oldT = t;
		posX = x;
		posY = y;
	}

	cout << "Yes" << endl;

	return 0;
}
