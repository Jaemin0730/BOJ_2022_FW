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
    double a[5];
    double ans[4];
    for (int i = 1; i <= 4; i++)
        cin >> a[i];
    ans[0] = a[1] / a[3] + a[2] / a[4];
    ans[1] = a[3] / a[4] + a[1] / a[2];
    ans[2] = a[4] / a[2] + a[3] / a[1];
    ans[3] = a[2] / a[1] + a[4] / a[3];
    double rot = 0;
    int mini = 10;
    for (int i = 0; i < 4; i++)
        if (rot < ans[i])
            rot = ans[i];
    for (int i = 0; i < 4; i++)
        if (rot == ans[i])
            mini = min(mini, i);
    cout << mini;
}