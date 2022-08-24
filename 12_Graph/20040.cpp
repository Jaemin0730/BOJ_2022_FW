#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 500000
int n, m, node[MAX] = {}, sol = 0;

int Find (int a) {
    if (a == node[a]) {
        return a;
    }
    else {
        return node[a] = Find(node[a]);
    }
}

bool Union (int a, int b) {
    a = Find(a);
    b = Find(b);
    if (a == b) {
        return true;
    }
    else {
        node[a] = b;
        return false;
    }
}

int main(void)
{
    u;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        node[i] = i;
    }
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        if (Union(x, y)) {
            sol = i + 1;
            break;
        }
    }
    if (sol == 0) {
        cout << 0;
    }
    else {
        cout << sol;
    }
}