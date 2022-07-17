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
    ll num, ans = 0;
    char op;
    cin >> num;
    ans = num;
    while (1)
    {
        cin >> op;
        if (op == '=') { cout << ans << '\n'; break; }
        cin>> num;
        if (op == '+')
            ans += num;
        else if (op == '-')
            ans -= num;
        else if (op == '*')
            ans *= num;
        else if (op == '/')
            ans /= num;
    }
}