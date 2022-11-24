#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;


int main(void)
{
    u
    int n;
	cin >> n;
	while (0 < (n--)) {
		int v[10] = {};
		bool m = {};
		bool z = {};
		for (int i = 0; i < 10; ++i) {
			cin >> v[i];

			if (18 == v[i]) {
				m = true;
			}
			else if (17 == v[i]) {
				z = true;
			}
		}

		for (int i = 0; i < 10; i++) {
			cout << v[i] << ' ';
		}
		cout << '\n';

		if (!m && !z) {
			cout << "none\n\n";
		}
		else if (m && !z) {
			cout << "mack\n\n";
		}
		else if (!m && z) {
			cout << "zack\n\n";
		}
		else {
			cout << "both\n\n";
		}
	}
}