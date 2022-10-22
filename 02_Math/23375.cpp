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
    int x, y, r;
    cin >> x >> y >> r;
    cout << x - r << ' ' << y + r << '\n';
    cout << x + r << ' ' << y + r << '\n';
    cout << x + r << ' ' << y - r << '\n';
    cout << x - r << ' ' << y - r << '\n';
}