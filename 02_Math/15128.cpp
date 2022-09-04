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
    ll p1, p2, q1, q2;
    cin >> p1 >> q1 >> p2 >> q2;
    bool tf = (p1 * p2 % (q1 * q2 * 2) == 0);
    cout << tf;
}