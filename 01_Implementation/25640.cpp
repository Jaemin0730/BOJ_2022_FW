#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

string j, f;
int n, ans;

int main(void)
{
    u;
    cin >> j >> n;
    while(n--){
        cin >> f;
        if(j == f) ans++;
    }
    cout << ans;
}