#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

using ll = long long;

int main() {
	u
	int t;
	cin >> t;
	while (0 < (t--)) {
		ll lt, wt, le, we;
		cin >> lt >> wt >> le >> we;
		ll at = lt * wt;
		ll ae = le * we;
		if (ae < at) {
			cout << "TelecomParisTech\n";
		}
		else if (at < ae) {
			cout << "Eurecom\n";
		}
		else {
			cout << "Tie\n";
		}
	}
}
