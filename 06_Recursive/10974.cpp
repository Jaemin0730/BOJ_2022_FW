#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n;
bool tf[10] = {};
int v[10] = {};

void re (int cnt) {
    if (cnt == n) {
        for (int i = 0; i < n; i++) {
            cout << v[i] + 1 << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!tf[i]) {
            tf[i] = true;
            v[cnt] = i;
            re(cnt + 1);
            tf[i] = false;
        }
    }
}

int main(void)
{
    u;
    cin >> n;
    re(0);
}