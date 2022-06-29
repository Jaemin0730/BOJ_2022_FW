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
    ll dp[68] = {1, 1, 2, 4};
    int t;
    cin >> t;
    for (int i = 4; i < 68; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4];
    }
    while (t--)
    {
        int n;
        cin >> n;
        cout << dp[n] << "\n";
    }
}