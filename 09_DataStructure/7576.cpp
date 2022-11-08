#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int v[1000][1000] = {};
int day[1000][1000] = {};
queue<pii> q;
int m, n;

int dx[4] = {0, 0, 1, -1}; 
int dy[4] = {1, -1, 0, 0}; 

int main(void)
{
    u;
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
            if (v[i][j] == 1) {
                q.push(make_pair(i, j));
                day[i][j] = 0;
            }
            else {
                day[i][j] = -1; // 방문하지 않은거 표시!
            }
        }
    }

    while (!q.empty()) {
        int x = q.front().fst;
        int y = q.front().snd;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int xx = x + dx[i];
            int yy = y + dy[i];
            if (0 <= xx && xx < n && 0 <= yy && yy < m) {
                if (v[xx][yy] == 0 && day[xx][yy] == -1) {  // (익지 않은 토마토) AND (방문 x) 
                    day[xx][yy] = day[x][y] + 1;    // 이제 방문 O
                    q.push(mp(xx, yy)); // 방문 O -> 익게 된 토마토를 큐에 넣기!
                }
            }
        }
    }

    int sol = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sol = max(sol, day[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == 0 && day[i][j] == -1) {
                // (익지 않은 토마토) AND (방문 x)
                sol = -1;
            }
        }
    }
    cout << sol;
}