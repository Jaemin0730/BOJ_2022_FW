#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, sz;
string s;

int main(void)
{
    u;
    cin >> n;
    while(n--){
        cin >> s;
        sz = s.size();
        if (6 <= sz && sz <= 9) cout << "yes\n";
        else cout << "no\n";
    }
}