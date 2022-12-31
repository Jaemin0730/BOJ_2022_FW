#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;



int main(void)
{
    u
    int a, b, n, sol = 0;
    cin >> a >> b >> n;
    if (a % b == 0) {
        cout << 0;
        return 0;
    } 
    if (a > b) {
        a %= b;
    }
    for (int i = 0; i < n; i++) {
        a *= 10;
        sol = (int)(a / b);
        a %= b;
    }
    cout << sol;
}