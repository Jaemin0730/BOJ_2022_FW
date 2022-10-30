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
	vector<string>v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
		transform(v[i].begin(), v[i].end(), v[i].begin(), ::tolower);
	}

	for (int i = 0; i < n; i++)	{
		cout << v[i] << '\n';
	}
}