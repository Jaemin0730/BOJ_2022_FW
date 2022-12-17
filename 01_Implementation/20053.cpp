#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int main(void)
{
    u 
    int N, T, max, min, temp;

	cin >> T;

	for (int i = 0; i < T; i++) {
		max = -1000000;
		min = 1000000;

		cin >> N;

		for (int j = 0; j < N; j++) {
			cin >> temp;
			if (max < temp) max = temp;
			if (min > temp) min = temp;
		}

		cout << min << " " << max << "\n";

	}
}