#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

priority_queue<int, vector<int>, greater<int>> pq;  // 오름차순 우선순위 큐

int main(void)
{
    u;
    int n;
    cin >> n;
    if (n == 1) {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        pq.push(num);
    }
    int sol = 0;
    while (pq.size() > 1) {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int c = a + b;
        sol += c;
        pq.push(c);
    }
    cout << sol;
}