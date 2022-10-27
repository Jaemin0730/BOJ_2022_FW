#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n;
int dp[501][501], a[501], b[501];

int main(void)
{
    u;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++) {
        dp[i][i] = 0;
    }
    for (int t = 1; t < n; t++) {
        for (int i = 0; i < n - t; i++) {
            int j = i + t;
            dp[i][j] = 1e9;
            for (int k = i; k < j; k++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + a[i] * a[k + 1] * b[j]);
            }
        }
    }
    cout<<dp[0][n-1];
}