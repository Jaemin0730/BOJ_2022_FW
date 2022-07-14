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
    int a, i = 1;
    for (cin >> a;a!=1; i++)
		a = a % 2 ? 3 * a + 1 : a / 2;
    cout << i;
}