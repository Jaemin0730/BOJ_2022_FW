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
    int n, d;
	cin >> n >> d;

	auto v = vector<int>(n);
	auto sum = int{ 0 };
	for (auto i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
	}

	for (const auto& p : v) {
		cout << p * (d / sum) << '\n';
	}
}