#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int r, c, sol = 0;
char v[20][20] = {};
bool tf[26] = {};
int mr[4] = {-1, 1, 0, 0};  // r의 이동방향
int mc[4] = {0, 0, -1, 1};  // c의 이동방향

void dfs (int x, int y, int cnt) {
    bool tfgo = false;
    for (int i = 0; i < 4; i++) {
        int nr = x + mr[i];
        int nc = y + mc[i];
        if (nr < 0 || nr >= r || nc < 0 || nc >= c) {
            continue;   // 갈 수 없는 곳이면 continue!
        }
        char nalp = v[nr][nc];
        if (tf[nalp - 'A']) {
            continue;   // 이미 방문했었으면 continue!
        }
        // 모든 continue 케이스들을 다 지나갔다면,
        tfgo = true;    // 이제는 방문 가능
        tf[nalp - 'A'] = true;  // 방문했으면 true로 변경해주기
        dfs(nr, nc, cnt + 1);
        tf[nalp - 'A'] = false; // 다른 경우에서 해당 알파벳 방문 가능하도록 해주기
    }
    if (!tfgo) {    // 갈 수 있는 경우가 없음 ㅠㅠ
        sol = max(sol, cnt);
        return;
    }
}

int main(void)
{
    u;
    cin >> r >> c;  // 세로 r, 가로 c
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> v[i][j];
        }
    }
    char pit = v[0][0];
    tf[pit - 'A'] = true;
    dfs(0, 0, 1);   // r, c, sol -> 가로, 세로, 카운트 횟수!
    cout << sol;
}