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
    int n, t;
    cin >> n >> t;
    int k[n + 1], s[n + 1], dp[n + 1][10001] = {};
    for (int i = 1; i <= n; i++) {
        cin >> k[i] >> s[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= t; j++) {
            if (k[i] > j) {
                dp[i][j] = dp[i - 1][j];
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - k[i]] + s[i]);
            }
        }
    }
    cout << dp[n][t];
}