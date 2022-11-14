#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int m, n, k;
int v[51][51] = {};           // v: 배추밭 배열
bool tf[51][51] = {};         // tf: 방문여부 배열
int dx[4] = {0, 0, 1, -1}; 
int dy[4] = {1, -1, 0, 0}; 

void Search (int y, int x) {
    tf[y][x] = true;    // 방문 완료
    for (int i = 0; i < 4; i++) {
        int xx = x + dx[i];     // 이동한 x 좌표
        int yy = y + dy[i];     // 이동한 y 좌표
        if (xx < 0 || yy < 0 || xx > m || yy > n) {
            continue;
        }
        if (v[yy][xx] == 1 && tf[yy][xx] == false) {
            Search(yy, xx); // New Search 시작 (이동한 y좌표, 이동한 x좌표)
        }
    }
}

int main(void)
{
    u
    int t;
    cin >> t;
    while (t--) {
        int cnt = 0;
        cin >> m >> n >> k;
        for (int i = 0; i< k; i++) {
            int x, y;
            cin >> x >> y;
            v[y][x] = 1;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (tf[i][j] == false && v[i][j] == 1) {  // 방문 X  AND 1이라고 표시된 좌표를 탐색하자!
                    Search(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
        // 결과 출력 후 배추밭 배열과 방문여부 배열을 초기화 하기!
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                v[i][j] = 0;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                tf[i][j] = false;
            }
        }
    }
}