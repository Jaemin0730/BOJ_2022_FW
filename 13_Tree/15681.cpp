#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 100001
int n, q, r;
vector<int> v[MAX];
bool tf[MAX] = {};
int a[MAX];

int dfs (int k) {
    if (a[k] != 0) {
        return a[k];
    }
    tf[k] = true;
    int temp = 1;
    for (int i = 0; i < v[k].size(); i++) {
        int node = v[k][i];
        if (!tf[node]) {
            temp += dfs(node);
        }
    }
    a[k] = temp;
    return temp;
}

int main(void)
{
    u;
    cin >> n >> r >> q;
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }
    a[r] = dfs(r);
    while (q--) {
        int s;
        cin >> s;
        cout << a[s] << "\n";
    }
}