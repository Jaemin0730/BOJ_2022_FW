#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

double n, p, ans;

int P(){
    if (n < 5) return p;
    if (n < 10) return p - 500;
    if (n < 15) return min(p - 500, p * 0.9);
    if (n < 20) return min({p - 500, p * 0.9, p - 2000});
    return min({p - 500, p * 0.9, p - 2000, p * 0.75});
}

int main(void)
{
    u;
    cin >> n >> p;
    ans = P();
    if (ans < 0) ans = 0;
    cout << ans << '\n';
}