#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int arr[100] = {};

int GCD(int a, int b) {
        if (a%b == 0) return b;
        return GCD(b, a%b);
}

int main(void)
{
    u
	int T;
	cin >> T;
    for (int t = 0; t < T; t++) {
		int n;
		cin >> n;
		for (int i=0; i<n; i++) {
			cin >> arr[i];
		}
		ll sum = 0;
		for (int i=0; i<n; i++) {
			for (int j=i+1; j<n; j++) {
				sum +=GCD(arr[i],arr[j]);
			}
		}
		cout << sum << "\n";
	}
}