#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int p[5], x, y, r, ans;

int main(void)
{
    u;
    cin >> p[1] >> p[2] >> p[3] >> p[4] >> x >> y >> r;
    for(int i = 1; i <= 4; i++){
        if(x == p[i]) ans = i;
    }
    cout << ans;
}