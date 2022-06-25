#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define pb push_back

#define MAX 100001
vector<int> v[MAX]; // 노드들을 저장
bool Visit[MAX];    // 노드들 방문여부를 저장
int parent[MAX];    // 부모 노드들 저장
int n;

void dfsParent (int x) {
    // 방문하면 visit을 true로 변경!
    Visit[x] = true;
    // 부모노드 - 자식노드 확인해서 탐색하기!
    for (int i = 0; i < v[x].size(); i++) {
        int child = v[x][i];
        // 방문 안한 경우, 해당 노드를 자식으로 판단하기!
        if (Visit[child] == false) {
            parent[child] = x;
            dfsParent(child);
        }
    }
}

int main(void)
{
    u;
    cin >> n;
    // 노드들을 v에다가 넣어주는 과정
    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    // DFS 시작!
    dfsParent(1);
    for (int i = 2; i <= n; i++) {
        cout << parent[i] << "\n";
    }
}