#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int m, n, sol = 2e9, a[100000];

int main(void)
{
    u;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    sort(a, a + m);
    int l = 0, r = 0;
    while (l < m && r < m) {
        int dif = a[r] - a[l];
        if (dif < n) {
            r++;
        }
        else {
            l++;
            sol = min(sol, dif);
        }
    }
    cout << sol;
}