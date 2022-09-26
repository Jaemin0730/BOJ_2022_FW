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
    int t, n, a, b;
    cin >> t;
    while (t--) {
        cin >> n;
        while (n--) {
            cin >> a >> b;
            cout << a + b << ' ' << a * b << '\n';
        }
    }
}