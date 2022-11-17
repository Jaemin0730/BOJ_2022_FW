#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;


int main(void)
{
    u;
    int n;
	cin >> n;
	while (n--) {
		int m;
		cin >> m;
		ll kk[m+1] = {};
		ll dd[m+1] = {};
		ll aa[m+1] = {};
		for (int i = 0; i < m; i++) {
			cin >> kk[i] >> dd[i] >> aa[i];
		}
		ll k, d, a;
		cin >> k >> d >> a;
		ll sol = 0;
		for (int i = 0; i < m; i++) {
			ll x = k * kk[i] - d * dd[i] + a * aa[i];
			if (x > 0) {
				sol += x;
			}
		}
		cout << sol << '\n';
	}
}