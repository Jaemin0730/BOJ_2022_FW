#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int a[1001] = {};
int b[1001] = {};

int main(void)
{
    u;
    int t, n, m;
    cin >> t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    vector<int> suma, sumb;
    for (int i = 0; i < n; i++) {
        int temp = a[i];
        suma.pb(temp);
        for (int j = i + 1; j < n; j++) {
            temp += a[j];
            suma.pb(temp);
        }
    }
    for (int i = 0; i < m; i++) {
        int temp = b[i];
        sumb.pb(temp);
        for (int j = i + 1; j < m; j++) {
            temp += b[j];
            sumb.pb(temp);
        }
    }
    sort(sumb.begin(), sumb.end());
    ll sol = 0;
    for (int i = 0; i < suma.size(); i++) {
        int temp = t - suma[i];
        sol += upper_bound(sumb.begin(), sumb.end(), temp) - lower_bound(sumb.begin(), sumb.end(), temp);
    }
    cout << sol;
}