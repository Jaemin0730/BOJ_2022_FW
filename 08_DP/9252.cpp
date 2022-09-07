#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int dp[1001][1001] = {};
//string s[1001][1001] = {};

int main(void)
{
    u;
    string a, b, sol = "";
    cin >> a >> b;
    for (int i = 1; i <= a.size(); i++) {
        for (int j = 1; j <= b.size(); j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout << dp[a.size()][b.size()] << "\n";
    // 중복 문자열 출력하기!
    int t = b.size();
    for (int i = a.size(); i > 0; i--) {
        for (int j = t; j > 0; j--) {
            // 현재 값이 바로 위 값과 같은 경우
            if (dp[i][j] == dp[i - 1][j]) {
                t = j;
                break;
            }
            // 현재 값이 바로 왼쪽 값과 같은 경우
            else if (dp[i][j] == dp[i][j - 1]) {
                continue;
            }
            // 현재 값이 왼쪽, 위의 값 모두 다를 경우
            else {
                sol = a[i - 1] + sol;    // DP에서는 1부터 시작이지만, 문자열은 0부터 시작! 
            }
        }
    }
    cout << sol;
}