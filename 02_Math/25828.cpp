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
    int g, p, t;
	cin >> g >> p >> t;

	int i = g * p;
	int m = g + t * p;

	if (i < m) {
		cout << 1;
	}
	else if (m < i) {
		cout << 2;
	}
	else {
		cout << 0;
	}
}