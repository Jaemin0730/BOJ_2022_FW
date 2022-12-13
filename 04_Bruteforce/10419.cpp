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
    int q, s, t, c;
    cin >> q;
    while (q--)
    {
        s = 0, t = 0;
        int ans = 0;
        cin >> c;
        while (1) {
            if (c < s + t) {
                t--; break; 
            }
            t++;
            s = t * t;
        }
        cout << t << "\n";
    }
}