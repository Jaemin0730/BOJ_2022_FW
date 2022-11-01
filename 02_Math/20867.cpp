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
    int M, S, G; cin >> M >> S >> G;
	double A, B; cin >> A >> B;
	int L, R; cin >> L >> R;

	double f = (1 / A) * L + (double)M / (double)G;
	double l = (1 / B) * R + (double)M / (double)S;
	if (f < l) cout << "friskus";
	else cout << "latmask";
}