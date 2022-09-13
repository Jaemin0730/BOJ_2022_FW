#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 1001
vector<int> node[MAX]; // 노드들을 넣을 곳
int degree[MAX] = {};  // 두 노드 사이의 간선의 값
int ntime[MAX] = {};   // 노드 마다 걸린 시간
int dp[MAX] = {};      // 노드마다 걸린 시간의 DP 값

int main(void)
{
    u;
    int t;
    cin >> t;
    while (t--) {
        // 입력하기
        int n, k, w;
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            cin >> ntime[i];
        }
        for (int i = 0; i < k; i++) {
            int a, b;
            cin >> a >> b;
            node[a].pb(b);
            degree[b]++;
        }
        cin >> w;
        // 위상정렬 알고리즘 실행
        queue<int> q;
        for (int i = 1; i <= n; i++) {
            if (degree[i] == 0) {
                q.push(i);
                dp[i] = ntime[i];
            }
        }
        // 위상정렬 중 가장 높은 값을 찾아야하기에 시간복잡도 고려하여 DP를 사용!
        while (!q.empty()) {
            int temp = q.front();
            q.pop();
            for (int i = 0; i < node[temp].size(); i++) {
                int next = node[temp][i];
                dp[next] = max(dp[temp] + ntime[next], dp[next]);
                degree[next]--;
                if (degree[next] == 0) {
                    q.push(next);
                }
            }
        }
        cout << dp[w] << "\n";
        // 초기화
        memset(node, 0, sizeof(node));
        memset(degree, 0, sizeof(degree));
        memset(ntime, 0, sizeof(ntime));
        memset(dp, 0, sizeof(dp));
    }
}