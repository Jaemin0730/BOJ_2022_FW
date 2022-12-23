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
	int n , cnt = 0;
	cin >> n;
	if (n < 10) {
		cout << n;
		return 0;
	}
	for (int i = 1; i <= n; i *= 10) {
		cnt += n - i + 1;
	}
	cout << cnt;
}