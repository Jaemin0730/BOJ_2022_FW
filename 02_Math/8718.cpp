#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

ll x, k, a, b, c;

int main(void)
{
    u;
    cin >> x >> k;
    if(7000 * k <= 1000 * x) a = 7000 * k;
    if(3500 * k <= 1000 * x) b = 3500 * k;
    if(1750 * k <= 1000 * x) c = 1750 * k;
    cout << max({a,b,c});
}