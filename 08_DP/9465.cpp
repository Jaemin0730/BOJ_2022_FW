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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sol;
        ll a[2][n + 1];
        ll dp[2][n + 1];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        dp[0][0] = a[0][0];
        dp[1][0] = a[1][0];
        dp[0][1] = a[0][1] + dp[1][0];
        dp[1][1] = a[1][1] + dp[0][0];
        for (int i = 2; i < n; i++) {
            dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + a[0][i];
            dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + a[1][i];
        }
        sol = max(dp[0][n - 1], dp[1][n - 1]);
        cout << sol << "\n";
    }
}