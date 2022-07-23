#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int a[3];
bool f1, f2;

int main(void)
{
    u;
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    if (a[0] == a[1] && a[1] == a[2]) f1 = true;
    if (a[2] * a[2] == a[0] * a[0] + a[1] * a[1]) f2 = true;
    if (!f1 && !f2) cout << 0;
    if (!f1 && f2) cout << 1;
    if (f1 && !f2) cout << 2;
}