#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 987654321
int n, m, sol = MAX;
int v[51][51] = {};
bool tf[13] = {};
vector <pii> chi, hou;   // chi: 치킨, 집: hou

void Search (int x, int cnt) {  // x: 현재위치, cnt: 현재 치킨집의 개수
    if (cnt == m) {
        int c = 0;  // 임시 치킨집의 최소 거리
        for (int i=0; i<hou.size(); i++) {
            int g = MAX;    // 임시 최소 거리
            for (int j=0; j<chi.size(); j++) {
                if (tf[j]) {    // 치킨집이 있다면,
                    int d = abs(hou[i].fst - chi[j].fst) + abs(hou[i].snd - chi[j].snd);
                    g = min(g, d);
                }
            }
            c += g; // 임시 치킨집의 최소 거리를 기존의 거리에다가 더해주기
        }
        sol = min(sol, c);  // (현재 치킨집의 최소 거리 vs 기존의 최소 거리 + 임시 치킨집의 최소거리) 중 최소로 갱신
        return;
    }
    if (x == chi.size()) return;

    // 현재 치킨집을 사용 O
    tf[x] = true;
    Search(x+1, cnt+1);
    // 현재 치킨집을 사용 X
    tf[x] = false;
    Search(x+1, cnt);
}

int main(void)
{
    u;
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> v[i][j];
            if (v[i][j] == 1) {
                hou.pb({i, j});
            }
            if (v[i][j] == 2) {
                chi.pb({i, j});
            }
        }
    }
    Search(0,0);
    cout << sol;
}