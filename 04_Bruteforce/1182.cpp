#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, s, sol = 0;
int a[1000001] = {};

void bt (int x, int y) {
    if (x == n) {
        return;
    }
    if (y + a[x] == s) {
        sol++;
    }
    bt(x + 1, y);           // 해당 숫자를 안더한 경우
    bt(x + 1, y + a[x]);    // 해당 숫자를 더한 경우
}

int main(void)
{
    u;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bt(0, 0);
    cout << sol;
}