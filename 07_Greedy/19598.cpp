#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

vector<pair<int, int>> v;

int main(void)
{
    u;
    int t;
    cin >> t;
    /*
    ----- 실패한 풀이 -----
    -> 왜? : 1,3번째 시간대가 하나, 2번째 시간대가 하나 인 경우는 2개인데,
            이를 그냥 3개로 계산하는 오류가 발생함 ㅠㅠ
    ----------------------
    priority_queue<pair<int, int>> pq;  // 시간들을 넣어줄 우선순위 큐!
    while (t--) {
        int a, b;
        cin >> a >> b;
        // 끝나는 시간을 기준으로 내림차순 정렬하고자 함
        pq.push(make_pair(b, a));
    }
    int sol = 0;    // 강의실의 개수는 최소 1개부터 시작함!
    int save = -1;
    while (!pq.empty()) {
        if (pq.top().first > save) {
            sol++;
        }
        save = pq.top().second;
        pq.pop();
    }
    cout << sol;
    */
    int sol = -1, cnt = 0;
    while (t--) {
        int a, b;
        cin >> a >> b;
        // 시작시간을 +1, 끝나는 시간을 -1해서 최대시간을 구하고자함!
        v.push_back(make_pair(a, 1));
        v.push_back(make_pair(b, -1));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cnt += v[i].second;
        // 시작, 끝 시간을 더하는 것들 중 가장 큰 값을 답으로!!
        sol = max(cnt, sol);
    }
    // 증감을 사용해서 답 구하는 방법!
    cout << sol;
}