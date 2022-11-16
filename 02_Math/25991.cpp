#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int main() {
	u;
	int n;
	cin >> n;
	double sum = 0;
	while (0 < (n--)) {
		double x;
		cin >> x;
		sum += pow(x, 3);
	}
	cout << fixed << setprecision(9) << pow(sum, 1.0 / 3);
}