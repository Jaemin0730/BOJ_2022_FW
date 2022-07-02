#include <bits/stdc++.h>
using namespace std;
#define u cin.tie(0)->sync_with_stdio(0)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int main(void)
{
    u;
    int l, r;
    cin >> l >> r;
    if(l != r) cout << "Odd " << max(l,r) * 2;
    else if(!l && !r) cout << "Not a moose";
    else cout << "Even " << l * 2;
}