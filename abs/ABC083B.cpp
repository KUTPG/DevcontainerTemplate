#include <bits/stdc++.h>
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

int sum(int i) {
	int total = 0;
	while (i > 0) {
		total += i % 10;
		i /= 10;
	}

	return total;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, a, b;

	cin >> n >> a >> b;
	int total = 0;

	for (int i = 1; i <= n; i++) {
		int s = sum(i);

		if (a <= s && s <= b) {
			total += i;
		}
	}

	cout << total << endl;

	return 0;
}
