#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define pb push_back
#define mp make_pair

#define max 1000
vector<pair<int, int>> v[max];      // 노드끼리 연결된 값 저장
vector<int> d(max + 1, 987654321);     // 각 노드들의 최소 거리 저장
priority_queue<pair<int, int>> pq;  // 다익스트라 알고리즘에 필요한 우선순위큐!
int n, m, Start, End;               // 노드 개수, 간선의 개수, 시작-끝 노드

void dijkstra (int Start) {
    d[Start] = 0;
    pq.push(mp(d[Start], Start));   // 시작하는 거리, 노드를 우선순위 큐에 넣어서 정렬하고자 함!
    while (!pq.empty()) {
        int now = pq.top().second;              // 현재 노드
        int distance = pq.top().first * (-1);   // 시작 ~ 현재 노드 거리를 내림차순 하려고 (* -1)
        pq.pop();
        if (d[now] < distance) {
            continue;
            // 이미 d에서 최소값으로 설정되어 있음!
        }
        for (int i = 0; i < v[now].size(); i++) {
            int nextn = v[now][i].first;             // 현재 노드와 연결된 노드
            int nextd = v[now][i].second + distance; // 현재까지 최소 길이 + 연결된 노드까지의 길이 합
            if (nextd < d[nextn]) {
                // 현재 확인 중인 노드를 지나는게 더 가깝다면,
                d[nextn] = nextd;
                pq.push(mp(d[nextn] * -1, nextn));   // 새로 갱신한 길이와 노드를 넣어준다!!
            }
        }
    }
}

int main(void)
{
    u;
    cin >> n >> m;
    // 노드끼리 연결된 값들을 v에 넣어줌!
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].pb(mp(b, c));
    }
    cin >> Start >> End;
    dijkstra(Start);
    cout << d[End];
}