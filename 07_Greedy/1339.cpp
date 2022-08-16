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
    vector<int> alp(26);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int t = 1;
        for (int i = s.size() - 1; i >= 0; i--) {
            alp[s[i] - 'A'] += t;
            t *= 10;
        }
    }
    int sol = 0;
    int num = 9;
    sort(alp.begin(), alp.end(), greater<int>());
    for (int i = 0; i < 26; i++) {
        if (alp[i] == 0) {
            break;
        }
        sol += num * alp[i];
        num--;
    }
    cout << sol;
}