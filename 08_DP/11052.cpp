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
    int n;
    cin >> n;
    int dp[n + 1] = {};
    int c[n + 1] = {};
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
    }
    dp[1] = c[1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i] = max(dp[i], dp[i - j] + c[j]);
            // dp[i - j] + c[j] : 1부터 i까지 가능한 경우의 수를 모두 비교해본다
            // 결국 i - j + j는 i이기 때문에 총 구매하는 카드의 개수는 일치!!!
        }
    }
    cout << dp[n];
}