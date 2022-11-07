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
    double h, w, n, m;
    cin >> h >> w >> n >> m;
    cout << (ll)ceil(h / (n + 1)) * (ll)ceil(w / (m + 1));
}