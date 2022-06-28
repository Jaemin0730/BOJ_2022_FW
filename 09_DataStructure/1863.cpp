#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int main(void)
{
    u;
    int n, cnt = 0, x, y;
    cin >> n;
    vector<pii> v;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.pb(mp(x, y));
    }
    sort(v.begin(), v.end());
    stack<int> s;
    s.push(0);
    for (int i = 0; i < n; i++) {
        int k = v[i].snd;
        while (s.top() > k) {
            s.pop();
        }
        if (s.top() < k) {
            s.push(k);
            cnt++;
        }
    }
    cout << cnt;
}