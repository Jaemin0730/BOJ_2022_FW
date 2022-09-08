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
    int s, a, b, c;
    cin >> s;
    while(s--){
        cin >> a >> b >> c;
        cout << min({a, b, c}) << "\n";
    }
}