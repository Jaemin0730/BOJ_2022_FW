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
    int n;
    cin >> n;
    int a[n + 1][3];
    int dpb[2][3];  // 최대
    int dps[2][3];  // 최소
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    dpb[0][0] = dps[0][0] = a[0][0];
    dpb[0][1] = dps[0][1] = a[0][1];
    dpb[0][2] = dps[0][2] = a[0][2];
    int s, b;   // s : 최소값, b : 최대값!
    for (int i = 1; i < n; i++) {
        dpb[1][0] = max(dpb[0][0], dpb[0][1]) + a[i][0];
        dps[1][0] = min(dps[0][0], dps[0][1]) + a[i][0];
        dpb[1][1] = max({dpb[0][0], dpb[0][1], dpb[0][2]}) + a[i][1];
        dps[1][1] = min({dps[0][0], dps[0][1], dps[0][2]}) + a[i][1];
        dpb[1][2] = max(dpb[0][1], dpb[0][2]) + a[i][2];
        dps[1][2] = min(dps[0][1], dps[0][2]) + a[i][2];
        for (int j = 0; j < 3; j++) {
            dpb[0][j] = dpb[1][j];
            dps[0][j] = dps[1][j];
        }
    }
    s = min({dps[0][0], dps[0][1], dps[0][2]});
    b = max({dpb[0][0], dpb[0][1], dpb[0][2]});
    cout << b << " " << s;
}