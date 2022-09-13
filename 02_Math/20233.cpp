#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int a, x, b, y, T, opt1, opt2;

int main(void)
{
    u;
    cin >> a >> x >> b >> y >> T;
    if(T > 30) {
        opt1 = a + (T - 30) * x * 21;
    }
    else {
        opt1 = a;
    }
    if(T > 45) {
        opt2 = b + (T - 45) * y * 21;
    }
    else {
        opt2 = b;
    }
    cout << opt1 << ' ' << opt2;
}