#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define pb push_back

int n, m;
vector<int> v[55];
bool Visit[55];
int cnt = 0;
void dfs (int x) {
    // 방문했으면 중단시킴!
    if (Visit[x]) {
        return;
    }
    // dfs 돈 것은 방문한 것으로 변경해주자
    Visit[x] = true;
    // 잎노드일 경우에만 ++해준다!
    if (v[x].empty() || (v[x].size() == 1 && v[x][0] == m)) {
        cnt++;
    }
    // 자식 노드 중 m이 있으면 PASS하고, 그 외에는 재귀 돌려주장ㅎㅎ
    for (int i = 0; i < v[x].size(); i++) {
        if (v[x][i] == m) {
            continue;
        }
        dfs(v[x][i]);
    }
    
}
int main(void)
{
    u;
    cin >> n;
    int r;  // 루트!
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (k == -1) {
            r = i;
        }
        else {
            v[k].push_back(i);
        }
    }
    cin >> m;
    if (m == r) {
        cnt = 0;
    }
    else {
        dfs(r);
    }
    cout << cnt;
}