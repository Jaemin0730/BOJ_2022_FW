#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n,k;
queue<pair<int, int>> q;    // (해당 노드, 최소 시간)
bool b[100001];

void bfs (int n) {
    q.push(mp(n, 0));   // 시작값 세팅! 최소시간은 시작이니까 0
    while (!q.empty()) {
        int node = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if (node == k) {    // k와 해당노드가 일치할때 술래잡기 성공!
            cout << cnt;
            return;
        }
        if (0 <= node + 1 && node + 1 <= 100000) {
            if (!b[node + 1]) {
                b[node + 1] = true;
                q.push(mp(node + 1, cnt + 1));
            }
        }
        if (0 <= node - 1 && node - 1 <= 100000) {
            if (!b[node - 1]) {
                b[node - 1] = true;
                q.push(mp(node - 1, cnt + 1));
            }
        }
        if (0 <= node * 2 && node * 2 <= 100000) {
            if (!b[node * 2]) {
                b[node * 2] = true;
                q.push(mp(node * 2, cnt + 1));
            }
        }
    }
}

int main(void)
{
    u;
    cin >> n >> k;
    b[n] = true;
    bfs(n);
}