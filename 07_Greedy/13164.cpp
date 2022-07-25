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
    int n, k;
    ll sol = 0;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> s(n - 1);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++) {
        s[i - 1] = v[i] - v[i - 1];
    }
    sort(s.begin(), s.end());
    for (int i = 0; i < n - k; i++) {
        sol += s[i];
    }
    cout << sol;
}