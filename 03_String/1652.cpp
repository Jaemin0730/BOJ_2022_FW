#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int N;
int m[101][101];

int main(void)
{
    u 
    cin >> N;

	char k;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> k;
			if (k == '.') m[i][j] = 1;
			else m[i][j] = 0;
		}
	}

	int cr = 0;
	int row = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (m[i][j] == 1) cr++;
			else cr = 0;

			if (cr == 2)
				row ++;
		}

		cr = 0;
	}


	int col = 0;
	int cc = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (m[j][i] == 1) cc++;
			else cc = 0;

			if (cc == 2)
				col++;
		}

		cc = 0;
	}


	cout << row << " " << col;
}