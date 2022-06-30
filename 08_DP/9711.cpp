#include <bits/stdc++.h>
using namespace std;
#define u cin.tie(0)->sync_with_stdio(0)
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
    for (int i = 1; i <= t; i++)
    {
        int P, Q;
        cin >> P >> Q;
        ll dp[P + 5] = {0, 1, 1, 2};
        for (int i = 4; i <= P; i++) {
            dp[i] = (dp[i - 1] + dp[i - 2]) % Q;
        }
        ll sol = dp[P] % Q;
        cout << "Case #" << i << ": " << sol << "\n";
    }
}