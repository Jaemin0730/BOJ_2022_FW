#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int pf[3], ans = 0x3f3f3f3f;

int main(void)
{
    u;
    for(int i = 0; i < 3; i++) cin >> pf[i];
    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(int j = 0; j < 3; j++) 
            sum += abs(j - i) * pf[j] * 2;
        ans = min(ans, sum);
    }
    cout << ans;
}