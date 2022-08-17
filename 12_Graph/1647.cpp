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
vector<pii> node[MAX]; // node[1][3,8]
priority_queue<pii, vector<pii>, greater<pii>> pq; // 간선의 값을 오름차순으로 정렬하여 (간선의 값, 노드 번호)로 구성한다.
bool tf[MAX] = {};
ll sol = 0;
int maxx = -1;

int main(void)
{
    u;
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++) {
        int a, b, c;    // a: 노드(1), b: 노드(2), c: 노드(1),(2)의 간선!
        cin >> a >> b >> c;
        node[a].pb({b, c});
        node[b].pb({a, c});
    }
    tf[1] = true;   // 시작하는 1은 무조건 방문이니까!
    for (int i = 0; i < node[1].size(); i++) {
        pq.push({node[1][i].snd, node[1][i].fst});  // (간선의 값, 노드 번호)
    }
    while (!pq.empty())
    {   // 우선순위 큐에서 젤 위에 있는 값이 간선의 값이 가장 작은거
        int cost = pq.top().fst;
        int num = pq.top().snd;
        pq.pop();
        if (!tf[num]) {
            tf[num] = true;
            //cout << sol << "!!\n";
            maxx = max(maxx, cost);
            sol += cost;
        }
        else {
            continue;
        }
        // 이제 pq에다가 다음 노드 순서를 넣어주는 과정 진행
        for (int i = 0; i < node[num].size(); i++) {
            int ncost = node[num][i].snd;
            int nnum = node[num][i].fst;
            if (!tf[nnum]) {
                pq.push({ncost, nnum});
            }
        }
    }
    cout << sol - maxx;
}