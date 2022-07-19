#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
#define MAX 1000000000
typedef long long ll;
typedef pair<int,int> pii;

int dp[101][10] = {0,};


int main(void)
{
    u;
    int n;
    cin >> n;
    for (int i = 1; i < 10; i++) {
        dp[1][i] = 1;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 0) {
                dp[i][0] = dp[i - 1][1];
            }
            else if (j == 9) {
                dp[i][9] = dp[i - 1][8];
            }
            else {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
            }
            dp[i][j] %= MAX;
        }
    }
    int sol = 0;
    for (int i = 0; i < 10; i++) {
        sol = (sol + dp[n][i]) % MAX;
    }
    cout << sol;
}