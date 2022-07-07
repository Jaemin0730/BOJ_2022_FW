#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, m;
int v[10];
int a[9];
bool b[9];
// x : 시작 숫자, k : 길이
void btrk (int x, int k) {
    if (k == m) {
        for (int i = 0; i < m; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = x; i <= n; i++) {
        if (b[i]) {
            continue;
        }
        b[i] = true;
        a[k] = v[i - 1];
        btrk(i + 1, k + 1);
        b[i] = false;
    }
    return;
}

int main(void)
{
    u;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v, v + n);
    btrk(1, 0);
}