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
    int x, y, xw, yw, xh, yh;
	cin >> x >> y;
	xw = (x - 1) / 4;
	yw = (y - 1) / 4;
	xh = (x-1) % 4;
	yh = (y-1) % 4;
	cout << abs(xw - yw) + abs(xh - yh);
}