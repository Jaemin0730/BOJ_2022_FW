#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

vector<pii> v;
priority_queue<int, vector<int>, greater<int>> pq;

int main(void)
{
    u;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.pb(mp(x, y));
    }
    // 시작,끝 시간대를 오름차순으로 정렬!
    sort(v.begin(), v.end());
    // 첫번째 종료 시간을 우선순위 큐에 넣어줌
    pq.push(v[0].second);
    // 두번째 종료시간부터 i번째 종료시간 vs i+1번째 시작시간 비교
    for (int i = 1; i < n; i++) {
        if (pq.top() <= v[i].first) {
            pq.pop();
        }
        pq.push(v[i].second);
    }
    cout << pq.size();
}