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
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            ans += i;
        }
    }   
    cout << ans * 5 - 24;
}