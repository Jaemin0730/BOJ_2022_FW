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
    int t, ans = 0;
    string s;
    cin >> t;
    while(t--){
        ans = 0;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'D') break;
            ans++;
        }
        cout << ans << '\n';
    }
}