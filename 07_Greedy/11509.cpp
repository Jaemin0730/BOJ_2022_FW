#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int a[1000001];

int main(void)
{
    u;
    int n, t;
    cin >> n;
    int sol = 0;
    for (int i = 0; i < n; i++) {
        cin >> t;
        a[t]++;
        if (a[t + 1] > 0) {
            a[t + 1]--;
        }
        else {
            sol++;
        }
    }
    cout << sol;
}