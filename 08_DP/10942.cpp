#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 2001
bool dp[MAX][MAX] = {};
int v[MAX] = {};

int main(void)
{
    u;
    int n, m;
    cin >> n;
    // 칠판의 적은 n개의 숫자들!
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        // 1개인 Case
        dp[i][i] = true;
        // 2개인 Case
        if (i > 1 && (v[i] == v[i - 1]))
        {
            dp[i - 1][i] = true;
        }
    }
    // 3개 이상인 Case
    // i:범위, j;시작, p:끝
    for (int i = 2; i < n; i++) {         
        for (int j = 1; j <= n - i; j++) {
            int p = i + j;
            if ((v[j] == v[p]) && (dp[j + 1][p - 1] == true)) {
                dp[j][p] = true;
            }
        }
    }
    // 최종 출력!
    cin >> m;
    for (int i = 0; i < m; i++) {
        int s, e;
        cin >> s >> e;
        cout << dp[s][e] << "\n";
    }
}