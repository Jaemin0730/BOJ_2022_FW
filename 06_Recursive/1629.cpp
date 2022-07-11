#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

ll a, b, c;

ll pow (ll x) {
    if (x == 0) {
        return 1;
    }
    ll s = pow(x / 2); // 분할정복 할 값을 저장해줌!
    s = s * s % c;
    if (x % 2 == 0) {
        return s;
    }
    else {
        return (s * a) % c;
    }
}

int main(void)
{
    u;
    cin >> a >> b >> c;
    cout << pow(b);
}