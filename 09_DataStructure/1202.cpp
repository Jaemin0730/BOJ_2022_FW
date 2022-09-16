#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 300001
vector<pii> jew;
vector<int> bag;
priority_queue<int> pq;

int main(void)
{
    u;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int a, b;       // 보석의 무게, 보석의 가격
        cin >> a >> b;
        jew.pb({a, b});
    }
    for (int i = 0; i < k; i++) {
        int x;          // 가방에 담을 수 있는 최대 무게
        cin >> x;
        bag.pb(x);
    }
    sort(jew.begin(), jew.end());   // 보석의 무게를 기준으로 정렬
    sort(bag.begin(), bag.end());
    ll sol = 0;
    int t = 0;                      // 보석 무게의 인덱스
    for (int i = 0; i < k; i++) {   // 가방 무게의 인덱스
        //*******************************************
        // 가방에 무게 충족하는 보석 넣는 과정이 어려움....
        while (t < n && jew[t].fst <= bag[i]) { //i번짹 가방에 t번째 보석의 무게가 조건을 만족하면 넣어주자!!
            pq.push(jew[t].snd);
            t++;
        }
        if (!pq.empty()) {
            sol += pq.top();
            pq.pop();
        }
        //*******************************************
    }
    cout << sol;
}