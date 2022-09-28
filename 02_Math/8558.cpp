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
    int n, sol = 1;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        sol *= i;
        sol %= 10;
    }
    cout << sol;
}