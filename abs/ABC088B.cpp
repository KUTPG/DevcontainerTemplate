#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <vector>
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
	int n, a = 0, r;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			a += v[i];
		} else {
			a -= v[i];
		}
	}

	cout << abs(a) << endl;

	return 0;
}
