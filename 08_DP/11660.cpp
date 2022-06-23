#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    int n, m;
    cin >> n >> m;
    int a[n + 1][n + 1], dp[n + 1][n + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        int x1, y1, x2, y2, cnt;
        cin >> x1 >> y1 >> x2 >> y2;
        cnt = dp[x2][y2] - (dp[x1 - 1][y2] + dp[x2][y1 - 1]) + dp[x1 - 1][y1 - 1];
        cout << cnt << "\n";
    }
}