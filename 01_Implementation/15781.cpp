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
    int m, n;
    int a=0, b=0;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        int h;
        cin >> h;
        a = max(a, h);
    }
    for (int j = 0; j < n; j++)
    {
        int p;
        cin >> p;
        b = max(b, p);
    }
    cout << a + b << '\n';
}