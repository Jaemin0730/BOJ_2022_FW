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
    ll X, N, a, b;
	cin >> X >> N;
	ll sum = 0;
	for(int i = 0; i< N; i++) {
		cin >> a >> b;
		sum += a * b;
	}
	cout << (X == sum ? "Yes" : "No");
}