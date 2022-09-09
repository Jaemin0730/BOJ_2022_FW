#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 1e9

int main(void)
{
    u;
    int n, sol = MAX;
    cin >> n;
    int dp[1001][3] = {};
    int v[1001][3] = {};
    // 색깔 3개
    for (int i = 0; i < n; i++) {
        cin >> v[i][0] >> v[i][1] >> v[i][2];
        // 순서대로 R G B 값 받아오기!
    }
    for (int i = 0; i < 3; i++) {   // 1번집 설정하기!
        // 1번째 색 설정 -> 내가 고른 색 제외 나머지는 1e9로 설정해주기
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                dp[0][j] = v[0][j];
            }
            else {
                dp[0][j] = MAX;
            }
        }
        // 2번째 ~ n번째 색 설정 -> DP 사용
        for (int j = 1; j < n; j++) {
            dp[j][0] = v[j][0] + min(dp[j - 1][1], dp[j - 1][2]);
            dp[j][1] = v[j][1] + min(dp[j - 1][0], dp[j - 1][2]);
            dp[j][2] = v[j][2] + min(dp[j - 1][0], dp[j - 1][1]);
        }
        // N번째와 1번째 색 비교 -> 다른 것 중 최소값 정하기!
        for (int j = 0; j < 3; j++) {
            if (i != j) {
                sol = min(sol, dp[n - 1][j]);
            }
        }
    }
    cout << sol;
}