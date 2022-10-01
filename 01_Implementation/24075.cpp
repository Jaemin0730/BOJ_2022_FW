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
    int a[2], sum, sub;
    cin >> a[0] >> a[1];
    sum = a[0] + a[1];
    sub = a[0] - a[1];
    cout << max(sum, sub) << '\n' << min(sum, sub);
}