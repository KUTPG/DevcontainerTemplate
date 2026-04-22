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

std::string replaceAll(std::string str, const std::string &from,
					   const std::string &to) {
	size_t start_pos = 0;
	while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
		str.replace(start_pos, from.length(), to);
		start_pos += to.length();
	}
	return str;
}

const ll INF = 1e18;
const ll MOD = 1e9 + 7;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	cin >> s;

	s = replaceAll(s, "eraser", "");
	s = replaceAll(s, "erase", "");
	s = replaceAll(s, "dreamer", "");
	s = replaceAll(s, "dream", "");

	if (s == "") {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}
