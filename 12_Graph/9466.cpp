#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 100001
int t, n, sol = 0;
int v[MAX] = {};
bool tf[MAX] = {};
bool finish[MAX] = {};

void bfs (int x) {
    tf[x] = true;
    // x가 고른 팀원을 찾기 -> t
    int t = v[x];
    if (!tf[t]) {
        bfs(t);
    }
    // 이 아래 부분이 나에게 많이 까다로웠음 ㅠㅠ 재귀는 진짜 필수임을 깨닫는.......
    // *************************************************************************************
    else if (!finish[t]) {  // 방문은 했지만, 사이클이 다 안 끝난 경우
        // x가 고른 팀원부터 다시 x를 찾을때(사이클 확인 되는 경우)까지 반복문을 돌려주자!
        for (int i = t; i != x; i = v[i]) {
            // 팀이 되는 인원을 sol에 더해주자
            sol++;
        }
        sol++;
    }
    // 위의 과정이 끝났으면, 방문 + 사이클이 모두 다 끝났다고 체크해주자
    finish[x] = true;
    // *************************************************************************************
} 

int main(void)
{
    u;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        for (int i = 1; i <= n; i++) {
            if (!tf[i]) {
                bfs(i);
            }
        }
        cout << n - sol << "\n";
        sol = 0;
        memset(tf, false, sizeof(tf));
		memset(finish, false, sizeof(finish));
    }
}
