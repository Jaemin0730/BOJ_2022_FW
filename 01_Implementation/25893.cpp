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
		int c = 0;
		for (int i = 0; i < 3; ++i) {
			int x;
			cin >> x;
			cout << x << ' ';

			if (10 <= x) {
				c++;
			}
		}
		cout << '\n';

		if (0 == c) {
			cout << "zilch";
		}
		else if (1 == c) {
			cout << "double";
		}
		else if (2 == c) {
			cout << "double-double";
		}
		else if (3 == c) {
			cout << "triple-double";
		}
		cout << "\n\n";
	}
}