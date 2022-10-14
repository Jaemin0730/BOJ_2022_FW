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
    int p = 250;
    double a, b, s;
    cin >> s >> a >> b;
    if (s <= a) 
        cout << p;
    else 
        cout << p + 100 * ceil((s - a)/b);
}

