#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int t, a, b, ans = 0x3f3f3f3f;

int main(void)
{
    u;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if (a <= b) {
            ans = min(ans,b);
        }
    }
    if(ans == 0x3f3f3f3f) {
        cout << -1;
    }
    else {
        cout << ans;
    }
}