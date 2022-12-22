#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int p[6] = {};

int main(void)
{
    u
	for (int i = 1; i <= 5; i++) cin >> p[i];

	for (int i = 5; i >= 1; i--) {
		for (int j = 1; j < i; j++) {
			if (p[j] > p[j+1]) {
				swap(p[j], p[j+1]);
				for (int k = 1; k <= 5; k++)
					cout << p[k] << " ";
				cout << endl;
			}
		}
	}
}