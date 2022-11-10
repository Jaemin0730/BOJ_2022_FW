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
    int a, b;
	cin >> a >> b;
	int n;
	cin >> n;
	while (n--) {
		int x;
		cin >> x;
		cout << x << ' ';
		if (x <= 1000) {
			cout << x * a;
		}
		else {
			const auto& ex = x - 1000;
			cout << 1000 * a + ex * b;
		}
		cout << '\n';
	}
}