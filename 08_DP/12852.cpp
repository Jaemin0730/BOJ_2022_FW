#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int dp[1000001] = {0, 0, 1, 1};

int main(void)
{
    int n;
    cin >> n;
    for (int i = 4; i <= n; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);
        if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
    }
    cout << dp[n] << "\n" << n << " ";
    while (n != 1) {
        int x, y, z;
        x = dp[n - 1];
        y = 1000000;
        z = 1000000;
        if (n % 2 == 0) {
            y = dp[n / 2];
        }
        if (n % 3 == 0) {
            z = dp[n / 3];
        }
        int k = min({x, y, z});
        if (k == x) {
            n = n - 1;
        }
        else if (k == y) {
            n = n / 2;
        }
        else {
            n = n / 3;
        }
        cout << n << " ";
    }
}