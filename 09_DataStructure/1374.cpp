#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

priority_queue<pii, vector<pii>, greater<pii>> fstsndpq;    // 시작 끝시간 모두
priority_queue<int, vector<int>, greater<int>> sndpq;       // 끝시간만 

int main(void)
{
    u;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int w, a, b;
        cin >> w >> a >> b;
        fstsndpq.push({a, b});
    }
    while (!fstsndpq.empty()) {
        int Start = fstsndpq.top().first;
        int End = fstsndpq.top().second;
        fstsndpq.pop();
        if (!sndpq.empty()) {
            if (Start >= sndpq.top()) {
                sndpq.pop();
                sndpq.push(End);
            }
            else {
                sndpq.push(End);
            }
        }
        else {
            sndpq.push(End);
        }
    }
    cout << sndpq.size();
}