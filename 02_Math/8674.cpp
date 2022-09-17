#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

ll a[2];

int main(void)
{
    u;
    cin >> a[0] >> a[1];
    if(!(a[0] % 2) || !(a[1] % 2)) cout << 0;
    else cout << min(a[0], a[1]);
}