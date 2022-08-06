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
    ll sol = 0;
    while (1) {
        int n;
        cin >> n;
        if (n == -1) {
            break;
        }
        sol += n;
    }
    cout << sol;
}