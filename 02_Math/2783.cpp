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
	double min = ((double)a / b);;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		min = min > ((double)a / b) ? ((double)a / b) : min;
	}
	cout << min * 1000 << "\n";
}