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
    int a = 1, b = 1; // a : 분자 // b : 분모

	while (1) {
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		else 	cout << a / b << " " << a % b << " / " << b << "\n";
	}
}