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
    int n1, n2, a, b, c, d, q, r;
    cin >> n1 >> n2;
    a = 100 - n1;
    b = 100 - n2;
    c = 100 - (a + b);
    d = a * b;
    q = d / 100;
    r = d % 100;
    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r << '\n';
    cout << c + q << ' ' << r << '\n';
}