#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, a, d, g;
vector <int> s;

int main(void)
{
    u;
    cin >> n;
    s.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> a >> d >> g;
        s[i] = a * (d + g);
        if(a == d + g) {
            s[i] *= 2;
        }
    }
    cout << *max_element(s.begin(), s.end());
}