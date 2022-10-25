#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int t, tn, ts, a, b, c;

int main(void)
{
    u;
    cin >> t;
    while(t--){
        cin >> tn >> a >> b >> c;
        ts = a + b + c;
        cout << tn << ' ' << ts << ' ';
        if (ts >= 55 && a >= 11 && b >= 8 && c >= 12) cout << "PASS\n";
        else cout << "FAIL\n";
    }
}