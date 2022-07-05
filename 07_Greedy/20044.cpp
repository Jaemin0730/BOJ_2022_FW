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
    int a[2 * n];
    for (int i = 0; i < 2 * n; i++) {
        cin >> a[i];
    }
    sort(a, a + 2 * n);
    int minn = 1e9; // 최소값!
    for (int i = 0; i < n; i++) {
        int save = a[i] + a[2 * n - i - 1];
        if (minn > save) {
            minn = save;
        }
    }
    cout << minn;
}