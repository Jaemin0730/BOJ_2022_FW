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
    int qq = 0;     // 전에 v값! -> 같으면 중복이니까 스킵해주자
    for (int i = 1; i <= n; i++) {
        if (b[i]) {
            continue;
        }
        if (qq != v[i - 1]) {
            qq = v[i - 1];
            b[i] = true;
            a[k] = v[i - 1];
            btrk(i, k + 1);
            b[i] = false;
        }
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