#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

ll ans;
string a, b;

int main(void)
{
    u
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < b.size(); j++) {
            ans += (a[i] - '0') * (b[j] - '0');
        }
    }
    cout << ans << '\n';
}